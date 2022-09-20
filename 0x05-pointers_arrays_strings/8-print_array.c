#include "main.h"
#include <stdio.h>

/**
 * print_array - print number of elements
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
if (n < 1)
_putchar('\n');
while (n > 0)
{
if (n != 1)
printf("%d, ", *a);
else
printf("%d\n", *a);
a++;
n--;
}
}
