#include "main.h"

/**
 * reverse_array - reverse content
 * @a: array of integers
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = temp;
}
}
