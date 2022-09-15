#include "main.h"

/**
 * print_number - print number
 * @n: number
 */

void print_number(int n)
{
int num = n;
int temp = n;
int div = 1;

if (n < 0)
{
_putchar('-');
temp = -n;
}
else if (n == 0)
_putchar('0' + 0);
while (num != 0)
{
div *= 10;
num /= 10;
}
while (div / 10 != 0)
{
div /= 10;
num = temp / div;
_putchar('0' + num);
temp -= num *div;
}
}
