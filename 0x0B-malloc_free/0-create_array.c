#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: character to be initialized
 * Return: return a pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	if (size == 0)
	{
		return (NULL);
	}
	A = malloc(size * sizeof(char));

	if (A == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}
	return (A);
}
