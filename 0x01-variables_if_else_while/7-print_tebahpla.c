#include <stdio.h>

/**
 * main - entry point
 * Return:0 after printing the alphabet
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}
