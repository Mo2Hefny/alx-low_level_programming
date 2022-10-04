#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: string.
 */

char *_strdup(char *str)
{
char *arr;
int i;
if (!str)
return (0);
arr = malloc(sizeof(str));
if (!arr)
return (0);
for (i = 0; str[i]; i++)
arr[i] = str[i];
arr[i] = str[i];
return (arr);
}
