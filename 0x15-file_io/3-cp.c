#include "main.h"

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - program that copies content from one file to another
 * @argc: count of arguments
 * @argv: vector array of arguments passed
 * Return: 1 on success otherwise program exits
 */
int main(int argc, char *argv[])
{
	int src, dst, n_read = 1024, written, close_src, close_dst;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], 'O');
	dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(dst, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		written = write(dst, buffer, n_read);
		if (written == -1 || written != n_read)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_dst = close(dst);
	check_IO_stat(close_dst, dst, NULL, 'C');
	return (0);
}
/**
 * check_IO_stat - function checking if file can be opened or closed
 * @stat: file descriptor of the file that needs to be opened
 * @filename: name of the file
 * @mode: close or open
 * @fd: file desciptor variable
 * Return: nothing
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
