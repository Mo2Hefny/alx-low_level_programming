#include <main.c>

/**
 * print_alphabet - prints alphabet
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c++);
	}
	_putchar('\n');
}
