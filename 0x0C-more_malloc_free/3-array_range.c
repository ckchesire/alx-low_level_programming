#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: return NULL on "fail" otherwise return pointer
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;
	int temp_min = min;

	if (min > max)
		return (NULL);
	while (temp_min <= max)
	{
		temp_min++;
	}
	ptr = malloc(sizeof(int) * temp_min);
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
		ptr[i++] = min++;
	return (ptr);
}
