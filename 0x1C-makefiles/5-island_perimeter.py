#!/usr/bin/python3
""" python script """
 
 
def island_perimeter(grid):
    """Island perimeter gauged by looping through list of listsi

    Parameters
    ----------
    grid : list of lists passed from main
    """
    land = 0
    edge = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                land += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edge += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edge += 1
    perimeter  = land * 4 - edge * 2
    return perimeter
