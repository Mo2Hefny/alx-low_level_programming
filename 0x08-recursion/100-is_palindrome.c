#include "main.h"

/**
 * _strlen_recursion - calculate length of string
 * @s: string
 * Return: length.
 */

int _strlen_recursion(char *s)
{
if (!*s)
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - check string
 * @s: s
 * @max: length
 * Return: 1 if true and 0 if not.
 */

int checker(char *s, int max)
{
if (max > 0)
{
if (*s == *(s + max))
return (checker(++s, max - 2));
return (0);
}
return (1);
}

/**
 * is_palindrome - check string
 * @s: s
 * Return: 1 if true and 0 if not.
 */

int is_palindrome(char *s)
{
return (checker(s, _strlen_recursion(s) - 1));
}
