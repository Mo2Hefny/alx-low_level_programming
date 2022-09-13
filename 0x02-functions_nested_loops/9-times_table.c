#include "main.h"
/**
 * times_table - prints times table
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (j > 0)
			{
				_putchar(' ');
				if (n < 10)
					_putchar(' ');
			}
			if (n >= 10)
				_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			if (j < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
