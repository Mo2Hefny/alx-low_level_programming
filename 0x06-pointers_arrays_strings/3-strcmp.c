#include "main.h"

/**
 * _strcmp - compare characters of strings
 * @s1: string 1
 * @s2: string 2
 * Return: diff
 */

int _strcmp(char *s1, char *s2)
{
int i, diff = 0;
for (i = 0; s1[i] || s2[i]; i++)
{
if (s1[i] != s2[i])
{
diff = s1[i] - s2[i];
return (diff);
}
}
return (diff);
}
