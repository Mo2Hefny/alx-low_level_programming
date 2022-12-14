#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
int count = 0;
unsigned int num = 0;
unsigned int i;
for (i = 0; (s[i] < 48 || s[i] > 57) && s[i] != '\0'; i++)
{
if (s[i] == '-')
count++;
}
for ( ; s[i] >= 48 && s[i] <= 57; i++)
{
num *= 10;
num += (s[i] - '0');
}
if (count % 2 != 0)
num = -num;
return (num);
}
