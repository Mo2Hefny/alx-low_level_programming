#include <string.h>
#include "main.h"

/**
 * _strcat - entry point
 * @dest: main string
 * @src: added string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int len = strlen(dest);
int i;
for (i = 0; src[i] != '\0'; i++)
dest[len + i] = src[i];
dest[len + i] = src[i];
return (dest);
}
