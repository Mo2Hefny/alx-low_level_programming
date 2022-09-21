#include "main.h"

/**
 * cap_string - capitalize every word
 * @s: string
 * Return: string
 */

char *cap_string(char *s)
{
char sep[] = {
',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', ' ', '\t'};
int i, j;

if (s[0] >= 97 && s[0] <= 122)
s[0] -= 32;
for (i = 1; s[i]; i++)
{
if (s[i] >= 97 && s[i] <= 122)
{
if (s[i - 1] >= 97 && s[i - 1] <= 122)
continue;
for (j = 0; j < 13; j++)
{
if (s[i - 1] == sep[j])
{
s[i] -= 32;
break;
}
}
}
}
return (s);
}
