#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: bytes to be allocated
 * Return: return pointer to allocated memory otherwise 98 on fail
 */
void *malloc_checked(unsigned int b)
{
	void *alloc_mem;

	alloc_mem = malloc(b);
	if (alloc_mem == NULL)
	{
		exit(98);
	}
	return (alloc_mem);
}
