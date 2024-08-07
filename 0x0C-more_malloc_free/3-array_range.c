#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: return NULL on "fail" otherwise return pointer
 */
int *array_range(int min, int max)
{
	int n = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[n] = min;
		n++;
		min++;
	}
	return (ptr);
}
