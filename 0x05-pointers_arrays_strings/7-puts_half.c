#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of string
 * @str: string
 */

void puts_half(char *str)
{
int MAX = strlen(str);
int i;

for (i = MAX / 2 + 1; i < MAX; i++)
_putchar(str[i]);
_putchar('\n');
}
