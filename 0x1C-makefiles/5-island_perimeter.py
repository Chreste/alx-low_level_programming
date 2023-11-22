#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for x in range(height):
        for q in range(width):
            if grid[x][q] == 1:
                size += 1
                if (q > 0 and grid[x][q - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][q] == 1):
                    edges += 1
    return size * 4 - edges * 2
