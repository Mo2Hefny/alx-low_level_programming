#include "main.h"

/**
 * _puts_recursion - print string
 * @s: string
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(++s);
}
else
_putchar('\n');
}
