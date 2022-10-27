#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
int i, w = 1;
unsigned int num = 0;
if (!b)
return (0);
for (i = 0; b[i]; i++)
w *= 2;
for (i = 0; b[i]; i++)
{
if (b[i] != '1' && b[i] != '0')
return (0);
w /= 2;
num += (b[i] - '0') * w;
}
return (num);
}
