#include "main.h"

/**
 * _strchr - locate a character in a string.
 * @s: string
 * @c: character to locate
 * Return: string
 */

char *_strchr(char *s, char c)
{
int i, len = 0;
while (s[len])
len++;
for (i = 0; i < len; i++)
{
if (*s == c)
return (s);
s++;
}
return ('\0');
}
