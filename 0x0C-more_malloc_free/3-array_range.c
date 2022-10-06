#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of int
 * @min: min number
 * @max: max number
 * Return: array
 */

int *array_range(int min, int max)
{
int i, len;
int *arr;
if (min > max)
return (NULL);
len = max - min + 1;
arr = malloc(sizeof(int) * len);
if (arr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
arr[i] = min++;
return (arr);
}
