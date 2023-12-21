#!/usr/bin/python3
"""
5-island_perimeter
"""

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.

    Args:
    - grid: A list of lists of integers, where 0 represents water and 1 represents land.

    Returns:
    - The perimeter of the island.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4  # Each land cell contributes 4 to the perimeter

                # Check adjacent cells and subtract 1 for each land-land boundary
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
