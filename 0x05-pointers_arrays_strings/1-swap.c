#include "main.h"

/**
 * swap_int - swap two integers
 * @a: integer
 * @b: integer
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
