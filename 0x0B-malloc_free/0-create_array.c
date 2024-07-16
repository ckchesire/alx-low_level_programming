#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: character to be initialized
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *A = (char *)malloc(size * sizeof(char));
	for (i = 0; i <= size; i++)
	{
		A[i] = c;
	}
	return (A);
}
