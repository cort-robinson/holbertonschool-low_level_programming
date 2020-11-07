#!/usr/bin/python3
"""contains island_perimeter function"""


def island_perimeter(grid):
    """returns perimiter of island stored in grid"""
    perimeter = 0
    for x, row in enumerate(grid):
        for y, zone in enumerate(row):
            if zone == 1:
                if grid[x - 1][y] == 0:
                    perimeter += 1
                if grid[x][y - 1] == 0:
                    perimeter += 1
                if grid[x + 1][y] == 0:
                    perimeter += 1
                if grid[x][y + 1] == 0:
                    perimeter += 1
    return perimeter
