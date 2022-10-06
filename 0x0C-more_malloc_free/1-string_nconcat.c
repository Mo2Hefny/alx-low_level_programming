#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, len1 = 0, len2 = 0, size;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
size = len1 + len2;
str = malloc(size + 1);
for (i = 0; s1[i]; i++)
str[i] = s1[i];
for (i = 0; i < n && s2[i] ; i++)
str[len1 + i] = s2[i];
str[len1 + i] = 0;
return (str);
}
