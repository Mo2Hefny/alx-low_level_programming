#include "main.h"

/**
 * _memcpy - copy memory area.
 * @dest: destination
 * @src: source
 * @n : number of copied bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
while (n > 0)
{
dest[n - 1] = src[n - 1];
n--;
}
return (dest);
}
