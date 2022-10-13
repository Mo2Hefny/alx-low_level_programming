#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to functions to compare the integers
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (!array || !cmp || size <= 0)
return (-1);
while (i < size)
if (cmp(array[i++]))
return (--i);
return (-1);
}
