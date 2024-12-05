#!/usr/bin/python3
"""
    Module to calculate the perimeter of an island in a grid
"""


def island_perimeter(grid):
    """Calculates the total perimeter of an island in a grid.

        Args:
            grid(list of list int): A list of lists where 0 represents
            water and 1 represents land.

        Returns:
            int: Perimeter of the island.
    """
    perimeter = 0
    m, n = len(grid), len(grid[0])

    for i in range(m):
        for j in range(n):
            if grid[i][j] == 1:
                perimeter += 4
                if i < m-1 and grid[i+1][j] == 1:
                    perimeter -= 2
                if j < n-1 and grid[i][j+1] == 1:
                    perimeter -= 2
    return perimeter
