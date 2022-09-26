#include "main.h"

/**
 * _strpbrk - search a string for a set of bytes
 * @s: string
 * @accept: accepted bytes
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
int i, j, len = 0;
while (s[len])
len++;
for (i = 0; i <= len; i++)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}
return (0);
}
