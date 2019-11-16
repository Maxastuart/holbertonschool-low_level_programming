#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """
    island_perimeter: returns the preimeter of the island described in grid.

    @grid(list): a list of lists of integers.
    """
    perimeter = 0
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                perimeter += 4
                if y > 0:
                    if grid[y - 1][x] != 0:
                        perimeter -= 1
                if y < len(grid) - 1:
                    if grid[y + 1][x] != 0:
                        perimeter -= 1
                if x > 0:
                    if grid[y][x - 1] != 0:
                        perimeter -= 1
                if x < len(grid[0]) - 1:
                    if grid[y][x + 1] != 0:
                        perimeter -= 1
    return perimeter
