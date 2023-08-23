#!/usr/bin/python3
"""
A function that returns the perimeter of the island described in grid.
"""


def island_perimeter(grid):
    """A function that returns the perimiter of an island described in grid.

    Args:
        grid (list): a list of list of integers
    Returns:
        The perimeter of the island described in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for x in range(height):
        for w in range(width):
            if grid[x][w] == 1:
                size += 1
                if (w > 0 and grid[x][w - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][w] == 1):
                    edges += 1
    return size * 4 - edges * 2
