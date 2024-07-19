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
	int i = 0;
	int *ptr;
	int temp_min = min;

	if (min > max)
		return (NULL);
	while (temp_min <= max)
	{
		temp_min++;
		n++;
	}
	ptr = malloc(sizeof(int) * (n + 1));
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i++] = min++;
	}
	return (ptr);
}
