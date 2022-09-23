#include "main.h"

/**
 * infinite_add - add two strings
 * @n1: string 1
 * @n2: string 2
 * @r: container
 * @size_r: r size
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0;
int last_dig = 0;
int i;
int added = 0;
while (n1[len1] || n2[len2])
{
if (n1[len1])
len1++;
if (n2[len2])
len2++;
}
for (i = 1; len1 - i >= 0 || len2 - i >= 0; i++)
{
if (len1 - i >= 0)
{
added += n1[len1 - i] - '0';
}
if (len2 - i >= 0)
{
added += n2[len2 - i] - '0';
}
r[size_r - i] = (added % 10) + '0';
last_dig++;
if (added >= 10)
added = 1;
else
added = 0;
}
if (added)
{
last_dig++;
r[0] = '1';
}
if (size_r - last_dig <= 0)
{
return (0);
}
added = 0;
for (i = 1; i <= last_dig; i++)
{
if (len1 - i >= 0)
{
added += n1[len1 - i] - '0';
}
if (len2 - i >= 0)
{
added += n2[len2 - i] - '0';
}
r[last_dig - i] = (added % 10) + '0';
if (added >= 10)
added = 1;
else
added = 0;
}
r[last_dig] = '\0';
return (r);
}
