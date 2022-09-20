#include "main.h"

/**
 * _strlen - count length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
int i = 0;
int count = 0;
while (s[i] != '\0')
{
count++;
i++;
}
return (count);
}
