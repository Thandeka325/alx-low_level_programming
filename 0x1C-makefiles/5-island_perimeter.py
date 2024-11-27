#!/usr/bin/python3
"""
Module defines the function island_perimeter(grid)
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island described in a grid.

    Args:
        grid (list of list of int): 2D grid where 0 is water and 1 is land

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Add 4 for each land cell
                perimeter += 4
                # Subtract 2 for each shared edge with the land cell above
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                # Subtract 2 for each shared edge with the land cell the left
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
