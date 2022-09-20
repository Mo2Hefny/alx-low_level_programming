#include <string.h>
#include "main.h"

/**
 * puts2 - skips every other char
 * @str: string
 */

void puts2(char *str)
{
int i;
for (i = 0; i <= strlen(str); i += 2)
_putchar(str[i]);
_putchar('\n');
}
