#include "main.h"
/**
 * _strncat - function that concatenats two strings
 * @dest: Destination variable to copy string
 * @src: Source variable to copy string from
 * @n: number of elements to copy
 * Return: returns final concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *tmp;

	tmp = dest;
	while (*tmp != '\0')
	{
		tmp++;
	}
	
	for (i = 0; i < n; i++)
	{
		*tmp++ = *src++;
	}
	return (dest);
}
