#include "main.h"
/**
 * _strcat - function that concatenates two string
 * @dest: Destination character string
 * @src: Source character string
 * Return: returns pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char *ptr;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	ptr = dest;
	return (ptr);
}
