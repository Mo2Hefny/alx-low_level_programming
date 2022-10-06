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
char *alloc;
unsigned int i;
if (nmemb < 1 || size < 1)
return (NULL);
alloc = malloc(nmemb * size);
if (alloc == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
alloc[i] = 0;
return (alloc);
}
