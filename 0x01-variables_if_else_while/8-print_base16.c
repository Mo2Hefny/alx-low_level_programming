#include <stdio.h>

/**
 * main - entry point
 * Return:0 after printing alphabets
 */

int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
		putchar(c++);
	c = 'a';
	while (c <= 'f')
		putchar(c++);
	putchar('\n');
	return (0);
}
