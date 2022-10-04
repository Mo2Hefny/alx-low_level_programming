#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d array from memory
 * @grid: 2D array
 * @height: height
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
