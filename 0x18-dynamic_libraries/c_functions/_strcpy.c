#include "main.h"
/**
 * _strcpy - Copy a string
 * @dest: Destination to copy text
 * @src: Original text
 * Return: returns character
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
