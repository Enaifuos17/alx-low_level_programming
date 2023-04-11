#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2d array of integers
 *
 * @width: width
 * @height: height
 *
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = malloc(sizeof(*grid) * height);

	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(**grid) * width);
			if (grid[i] == 0)
			{
				/* free everything if malloc fails */
				while (i--)
					free(grid[i]);
				free(grid);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		}
	}
	return (grid);
}
