#include "main.h"

/**
 * print_number - print number
 * @n: number
 */

void print_number(int n)
{
int num = n;

if (num < 0)
{
_putchar('-');
num = -n;
}
if (num / 10 > 0)
print_number(num / 10);
_putchar('0' + num % 10);
}
