#include <stdio.h>

/**
 * main - entry point
 * Return:0 print combination
 */

int main(void)
{
	int i, j, n, m;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (n = i; n < 58; n++)
			{
				n == i ? m = j + 1 : m = 0;
				for ( ; m < 58; m++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(n);
					putchar(m);
					if (i == 57 && j == 56)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
