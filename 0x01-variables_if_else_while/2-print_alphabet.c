#include <stdio.h>

/**
 * main - entry point
 * Return:0 after printing the alphabet
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
