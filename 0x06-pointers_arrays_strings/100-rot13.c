#include "main.h"

/**
 * rot13- encode string
 * @s: string
 * Return: s
 */

char *rot13(char *s)
{
int i, j;
char *alpha = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
for (i = 0; s[i]; i++)
{
for (j = 0; j < 53; j++)
{
if ((s[i] - 13 == alpha[j] && j < 26) || (s[i] + 13 == alpha[j] && j > 25))
{
s[i] = alpha[j];
break;
}
}
}
return (s);
}
