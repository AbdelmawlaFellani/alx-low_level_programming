#!/usr/bin/python3

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0: #Checking UP
                   perimeter += 1
                if row == rows-1 or grid[row + 1][col] == 0: #Checking DOWN
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0: #Checking LEFT
                    perimeter += 1
                if col == cols-1 or grid[row][col + 1] == 0: #Checking RIGHT
                    perimeter += 1

    return perimeter
