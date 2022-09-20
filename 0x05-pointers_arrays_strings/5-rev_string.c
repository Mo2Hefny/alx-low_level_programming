#include <string.h>
#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 */

void rev_string(char *s)
{
char temp;
int i;
int MAX = strlen(s) - 1;
for (i = 0; i <= MAX / 2; i++)
{
temp = s[i];
s[i] = s[MAX - i];
s[MAX - i] = temp;
}
}
