#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
unsigned long int LD;
int i, count = 0;

for (i = 31; i >= 0; i--)
{
LD = n >> i;
if (LD & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
