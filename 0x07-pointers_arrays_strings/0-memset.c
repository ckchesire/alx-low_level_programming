#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the block of memory to fill
 * @b: constant character to be used
 * @n: no. of bytes to be set to the value
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
