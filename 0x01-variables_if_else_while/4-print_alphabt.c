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
	{
		if (c == 'q' || c == 'e')
		{
			c++;
			continue;
		}
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
