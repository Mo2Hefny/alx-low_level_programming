#include "main.h"

/**
 * _memset - fill memory with a constant byte.
 * @s: string
 * @b: byte
 * @n: filled spaces
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
while (n > 0)
{
s[n - 1] = b;
n--;
}
return (s);
}
