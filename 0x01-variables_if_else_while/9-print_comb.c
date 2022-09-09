#include <stdio.h>

/**
 * main - entry point
 * Return:0 after printing numbers
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		printf("%d", i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
