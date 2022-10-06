#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: size
 */

void *malloc_checked(unsigned int b)
{
void *alloc = malloc(b);
if (alloc == NULL)
exit(98);
return (alloc);
}
