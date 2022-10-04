#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer, Null if W of H is 0 or less.
 */

int **alloc_grid(int width, int height)
{
int **p;
int w = 0, h = 0, j;
if (width <= 0 || height <= 0)
return (0);
p = (int **) malloc(sizeof(int *) * height);
if (!p)
{
free(p);
return (0);
}
while (h < height)
{
p[h] = (int *) malloc(sizeof(int) * width);
if (!p[h])
{
for (j = 0; j <= h; j++)
free(p[j]);
free(p);
return (0);
}
w = 0;
while (w < width)
{
p[h][w] = 0;
w++;
}
h++;
}
return (p);
}
