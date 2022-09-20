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
printf("%d",*a);
if (n != 1)
{
_putchar(',');
_putchar(' ');
}
a++;
n--;
}
_putchar('\n');
}
