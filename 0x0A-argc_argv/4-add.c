#include <stdio.h>
#include <stdlib.h>
/**
 * isnumber - check if string is a number
 * @s: string
 * Return: 1 if true, 0 otherwise
 */
int isnumber(char *s)
{
if (!*s)
return (1);
if (*s >= '0' && *s <= '9')
return (isnumber(++s));
return (0);
}
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of string of argumments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int res = 0, i;
for (i = 1; i < argc; i++)
{
if (!isnumber(argv[i]))
{
printf("Error\n");
return (1);
}
res += atoi(argv[i]);
}
printf("%d\n", res);
return (0);
}
