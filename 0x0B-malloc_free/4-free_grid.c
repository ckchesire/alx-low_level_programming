#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees 2d grid previously created
 * @grid: ..
 * @height: ..
 * Return: return
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < heights; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
