#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: no. of array elements
 * @size: bytes for each element
 * Return: returns pointer to allocated memory "Succes"; NULL "fail"
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alloc_mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc_mem = malloc(nmemb * size);
	if (alloc_mem == NULL)
		return (NULL);
	return (alloc_mem);
}
