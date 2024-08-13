#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file to which text is to be appended
 * @text_content: null terminated text to be appended
 * Return: returns 1 on 'succes' and 0 on 'failure'
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_p;
	int letters = 0;
	int rw;

	if (filename == NULL)
		return (-1);

	file_p = open(filename, O_WRONLY | O_APPEND);

	if (file_p == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[letters])
		{
			letters++;
		}

		rw = write(file_p, text_content, letters);

		if (rw == -1)
			return (-1);
	}
	close(file_p);
	return (1);
}
