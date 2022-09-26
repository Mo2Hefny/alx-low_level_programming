#include "main.h"

/**
 * _strstr - search for string in string
 * @haystack: string
 * @needle: substring
 * Return: position of occurunce
 */

char *_strstr(char *haystack, char *needle)
{
char *s1, *s2;
while (*haystack)
{
s1 = haystack;
s2 = needle;
while (*s1 == *s2 && *s2)
{
s1++;
s2++;
}
if (!*s2)
return (haystack);
haystack++;
}
return (0);
}
