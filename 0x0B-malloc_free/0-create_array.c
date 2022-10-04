#include "main.h"
#include <stdlib.h>

/**
 * create_array - create anj array of chars
 * @size: the size of the memory to alocate
 * @c: initializing array with character
 * Return: string.
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (!size)
return (0);
arr = malloc(sizeof(char) * size);
if (!arr)
return (0);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
