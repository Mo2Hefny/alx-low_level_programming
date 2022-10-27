#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
int i, num = 0, w = 1;

if ((*b != '1' && *b != '0') || !b)
return (0);
for (i = 1; b[i]; i++)
w *= 2;
for (i = 0; b[i]; i++)
{
num += b[i] * w;
w /= 2;
}
return (num);
}
