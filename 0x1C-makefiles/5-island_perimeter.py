#!/usr/bin/python3
"""Defines an island perimeter calculating function."""


def island_perimeter(grid):
    """Return the perimeter of the grid island

    Args:
        grid (list): A list of list of integers of the grid island
    Returns:
        The perimeter of the island in the grid
    """
    w = len(grid[0])
    h = len(grid)
    edges = 0
    size = 0

    for x in range(h):
        for y in range(w):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    edges += 1
    return size * 4 - edges * 2
