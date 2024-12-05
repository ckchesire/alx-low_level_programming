#!/usr/bin/python3
def island_perimeter(grid):
    """Module to calculate the total island perimeter.
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
