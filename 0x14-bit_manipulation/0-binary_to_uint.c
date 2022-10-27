#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int len, i;
int w = 1;

if (!b)
return (0);
for (len = 0; b[len]; len++)
;
for (i = (len - 1); i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
return (0);
if (b[i] == '1')
num += w;
w *= 2;
}
return (num);
}
