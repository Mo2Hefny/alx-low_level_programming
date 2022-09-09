#include <stdio.h>

/**
 * main - entry point
 * Return:0 print combination
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
