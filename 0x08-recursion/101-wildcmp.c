#include "main.h"

/**
 * wildcmp - check two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if equal or 0 if not.
 */

int wildcmp(char *s1, char *s2)
{
if (!*s1 && !*s2)
return (1);
if (*s1 == *s2)
return (wildcmp(++s1, ++s2));
if (*s2 == '*' && *(s2 + 1) && !*s1)
return (wildcmp(s1, ++s2));
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
return (0);
}
