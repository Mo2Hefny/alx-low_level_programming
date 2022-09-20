#include "main.h"
#include <stdio.h>

/**
 * print_array - print number of elements
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
int i = 0;
while (n > 0)
{
if (n != 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);
i++;
n--;
}
_putchar('\n');
}
