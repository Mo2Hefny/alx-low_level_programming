#include <stdio.h>

/**
 * main - entry point
 * Return:0 after printing alphabets
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
		putchar(c++);
	c = 'A';
	while (c <= 'Z')
		putchar(c++);
	putchar('\n');
	return (0);
}
