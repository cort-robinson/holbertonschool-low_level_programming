#!/usr/bin/python3
"""contains island_perimeter function"""


def island_perimeter(grid):
    """returns perimiter of island stored in grid"""
    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if (x - 1) < 0 or grid[x - 1][y] == 0:
                    perimeter += 1
                if (y - 1) < 0 or grid[x][y - 1] == 0:
                    perimeter += 1
                if (x + 1) == len(grid) or grid[x + 1][y] == 0:
                    perimeter += 1
                if (y + 1) == len(grid[x]) or grid[x][y + 1] == 0:
                    perimeter += 1
    return perimeter
