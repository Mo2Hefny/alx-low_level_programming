#include "main.h"
/**
 * print_times_table - prints times table
 * @n: table limit
 */
void print_times_table(int n)
{
	int i, j, m;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			m = i * j;
			if (j > 0)
			{
				_putchar(' ');
				if (m < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (m < 100)
					_putchar(' ');
			}
			if (m >= 100)
			{
				_putchar('0' + (m / 100));
				_putchar('0' + ((m % 10) / 10));
				_putchar('0' + (m % 100));
			}
			else if (m >= 10)
			{
				_putchar('0' + (m / 10));
				_putchar('0' + (m % 10));
			}
			else
				_putchar('0' + m);
			if (j < n)
				_putchar(',');
		}
		_putchar('\n');
	}
	}
}
