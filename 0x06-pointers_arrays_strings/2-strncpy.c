#include "main.h"

/**
 * _strncpy - overwrite string into another
 * @dest: main string
 * @src: added string
 * @n : number of bytes added
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
while (i < n)
dest[i++] = '\0';
return (dest);
}
