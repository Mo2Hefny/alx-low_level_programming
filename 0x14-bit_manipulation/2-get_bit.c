#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: decimal number
 * @index: position of the bit you want to get
 * Return: 1 if it worked, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;

for (i = 0; i < 64; n >>= 1)
if (index == i++)
return (n & 1);
return (-1);
}
