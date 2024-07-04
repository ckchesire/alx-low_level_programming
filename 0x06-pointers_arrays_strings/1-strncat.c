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
	char *ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	if (n == 1)
	{
		*ptr++ = *src;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			*ptr = *src++;
		}
	}
	return (dest);
}
