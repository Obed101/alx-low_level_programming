  #!/usr/bin/python3
  """This module defines isand"""


def island_perimeter(grid):
	"""Defiines island representing land and water with
    0 and 1 respectively
    """
	x, y = 0, 0
    for row in range(1, len(grid) - 1):
            for col in range(1, len(grid[row]) - 1):
                if grid[row][col] == 1:
                    if grid[row][col - 1] == 0:
                        y += 1
                    if grid[row][col + 1] == 0:
                        y += 1
                    if grid[row - 1][col] == 0:
                        x += 1
                    if grid[row + 1][col] == 0:
                        x += 1
    return x + y
