#!/usr/bin/python3
"""function that returns the perimeter of an island"""


def island_perimeter(grid):
    """Defines the function that takes grid as an input to calculate the perimeter"""
    length_row = len(grid)
    length_column = len(grid[0])
    p = 0
    connections = 0

    for x in range(0, length_row):
        for y in range(0, length_column):
            if grid[x][y] == 1:
                p +=4
                if x != 0 and grid[x - 1][y] == 1:
                    connections += 1
                if y != 0 and grid[x][y - 1] == 1:
                    connections += 1
    answer = p - (connections * 2)
    return answer
