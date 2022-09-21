#include <string.h>
#include "main.h"

/**
 * _strncat - entry point
 * @dest: main string
 * @src: added string
 * @n: number of added bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int i;
for (i = 0; src[i] != '\0' && n > 0; i++)
{
dest[len + i] = src[i];
n--;
}
return (dest);
}
