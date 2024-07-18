#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2D array of integers
 * @width: column_length
 * @height: row_length
 * Return: return Null on failure else return 2D pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = calloc(height, sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = calloc(width, sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
		}
	}
	return (arr);
}
