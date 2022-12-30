#include "main.h"

/**
  * free_grid - free grid in the function
  * @grid: grid
  * @height: height
  * Return: Always zero
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

