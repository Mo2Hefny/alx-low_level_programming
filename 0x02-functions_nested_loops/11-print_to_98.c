#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - print numbers
 * @n: input number
 */
void print_to_98(int n)
{
	int digit;

	while (n != 98)
	{
		digit = _abs(n);
		if (n < 0)
		{
			_putchar('-');
		}
		if (digit > 99)
			_putchar('0' + (digit /= 100));
		if (digit > 9)
			_putchar('0' + (digit /= 10));
		_putchar('0' + digit);
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar('0' + 9);
	_putchar('0' + 8);
	_putchar('\n');
}
