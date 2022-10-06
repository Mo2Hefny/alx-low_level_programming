#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: elements
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *alloc;
if (!nmemb || !size)
return (NULL);
alloc = malloc(nmemb * size);
if (alloc == NULL)
return (NULL);
return (alloc);
}
