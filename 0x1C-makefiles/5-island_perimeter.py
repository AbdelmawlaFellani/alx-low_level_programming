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
                # Checking UP
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                # Checking DOWN
                if row == rows-1 or grid[row + 1][col] == 0:
                    perimeter += 1
                # Checking LEFT
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                # Checking RIGHT
                if col == cols-1 or grid[row][col + 1] == 0:
                    perimeter += 1

    return perimeter
