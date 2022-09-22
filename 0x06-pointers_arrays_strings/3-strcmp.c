#include "main.h"

/**
 * _strcmp - compare characters of strings
 * @s1: string 1
 * @s2: string 2
 * Return: 15 if s1 > s2, 0 if s1 = s2, -15 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
int i, diff;
for (i = 0; s1[i] && s2[i]; i++)
{
diff = s1[i] - s2[i];
if (!diff)
return (diff);
}
diff = s1[i] - s2[i];
return (diff);
}
