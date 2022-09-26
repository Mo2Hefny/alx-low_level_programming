#include "main.h"

/**
 * _strstr - search for string in string
 * @haystack: string
 * @needle: substring
 * Return: position of occurunce
 */

char *_strstr(char *haystack, char *needle)
{
int i, j, temp = 0, pos = 0;
for (i = 0; haystack[i] >= 0; i++)
{
pos = i;
for (j = 0; needle[j]; j++, pos++)
{
if (haystack[pos] == needle[j])
temp = 1;
else
{
temp = 0;
break;
}
}
if (temp && !needle[j])
return (haystack + i);
}
return (0);
}
