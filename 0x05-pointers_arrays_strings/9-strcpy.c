#include "main.h"
#include <string.h>

/**
 * _strcpy - sopy strings to eachother
 * @dest: string
 * @src: added string
 * Return: final string
 */

char *_strcpy(char *dest, char *src)
{
int len = strlen(dest) - 1;
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[len + i] = src[i];
}
dest[len + i] = src[i];
return (dest);
}
