#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function
 * @array: pointer to array
 * @size: size of array
 * @action: function to callback
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
while (size--)
action(array[i++]);
}
