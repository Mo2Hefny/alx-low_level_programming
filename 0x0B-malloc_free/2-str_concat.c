#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: string.
 */

char *str_concat(char *s1, char *s2)
{
int i, j, len1 = 0, len2 = 0, size;
char *arr;
if (!s1)
s1 = "";
if (!s2)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
size = len1 + len2;
arr = malloc(size + 1);
if (!arr)
return (0);
for (i = 0; i < len1; i++)
arr[i] = s1[i];
for (j = 0; j < len2; i++, j++)
arr[i] = s2[j];
arr[i] = '\0';
return (arr);
}
