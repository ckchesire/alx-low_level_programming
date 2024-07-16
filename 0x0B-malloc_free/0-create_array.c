#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: character to be initialized
 * Return: return array of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A = (char *)malloc(size * sizeof(char));

	if (size == '0')
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			A[i] = c;
		}
		return (A);
	}
}
