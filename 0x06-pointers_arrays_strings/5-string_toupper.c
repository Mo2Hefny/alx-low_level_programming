#include "main.h"

/**
 * string_toupper - change any lowercase to upper
 * @s: string
 * Return: string uppercased
 */

char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 97 && s[i] <= 122)
s[i] -= 32;
}
return (s);
}
