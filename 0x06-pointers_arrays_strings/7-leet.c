#include "main.h"

/**
 * leet - encode string
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
int i, j;
char sub[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

for (i = 0; s[i]; i++)
{
for (j = 0; j < 10; j++)
{
if (sub[j] == s[i])
{
s[i] = num[j];
break;
}
}
}
return (s);
}
