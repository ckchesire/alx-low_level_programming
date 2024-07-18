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
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = calloc(height, sizeof(int *));
	if (arr == NULL)
		free(arr);
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = calloc(width, sizeof(int));
		if (arr[i] == NULL)
		{
			while (i-- > 0)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
