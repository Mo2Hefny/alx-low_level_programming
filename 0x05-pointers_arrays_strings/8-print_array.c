#include "main.h"
#include <stdio.h>

/**
 * print_array - print number of elements
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
while (n > 0)
{
if (n != 1)
printf("%d, ", *a);
else
printf("%d", *a);
a++;
n--;
}
_putchar('\n');
}
