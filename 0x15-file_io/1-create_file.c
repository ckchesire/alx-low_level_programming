#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a null terminated string to be written to a file
 * Return: returns 1 on 'success' and -1 on 'failure'
 */
int create_file(const char *filename, char *text_content)
{
	int file_p;
	int letters = 0;
	int rw;

	if (filename == NULL)
		return (-1);

	file_p = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_p == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[letters])
	{
		letters++;
	}

	rw =  write(file_p, text_content, letters);

	if (rw == -1)
		return (-1);

	close(file_p);

	return (1);
}
