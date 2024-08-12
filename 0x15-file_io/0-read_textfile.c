#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - function to read a text file and print to POSIX stdout
 * @filename: pointer to file
 * @letters: buffer size
 * Return: No. of letters printed otherwise 0 on fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t len;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	len = fread(buffer, sizeof(char), letters, fp);
	buffer[len] = '\0';

	fwrite(buffer, sizeof(char), len, stdout);

	free(buffer);
	fclose(fp);

	return (len);
}
