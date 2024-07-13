#include "main.h"
/**
 * _strncpy - function copies a string
 * @dest: destination to copy string to
 * @src: source to copy string from
 * @n: number of times to copy
 * Return: returns final string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	char *tmp;

	tmp = dest;
	while (j < n && *src != '\0')
	{
		*tmp++ = *src++;
		j++;
	}
	while (j < n)
	{
		*tmp++ = '\0';
		j++;
	}
	return (dest);
}
