#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: characters to check
 * Return: position
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, len = 0;
int found;
while (s[len])
len++;
for (i = 0; i <= len; i++)
{
found = 0;
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (!found)
return (i);
}
return (i - 1);
}
