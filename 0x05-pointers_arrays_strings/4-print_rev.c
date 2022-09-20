#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reverse
 * @s: string
 */

void print_rev(char *s)
{
int i;
i = strlen(s) - 1;
while (i > -1)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
