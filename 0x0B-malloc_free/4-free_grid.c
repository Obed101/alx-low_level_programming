#include <stdlib.h>

/**
 * free_grid - Free memory allocated to a 2 dimensional array
 * @grid: The two dimensional array
 * @height: number of rows
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
