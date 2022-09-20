#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string
 */

void print_rev(char *s)
{
int i;
i = _strlen(s);
while (i > -1)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
