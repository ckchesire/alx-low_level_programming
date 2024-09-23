#include "main.h"
/**
 * _memcpy - function copies memory area
 * @dest: destination array where content is copied
 * @src: source data to be copied
 * @n: number of bytes to be copied
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
