#include <stdio.h>
#include <stdlib.h>
/**
 * min - calculate min number of cents needed
 * @n: change
 * Return: min number of cents.
 */
int min(int n)
{
if (n >= 25)
return (1 + min(n - 25));
if (n >= 10)
return (1 + min(n - 10));
if (n >= 5)
return (1 + min(n - 5));
if (n >= 2)
return (1 + min(n - 2));
if (n >= 1)
return (1 + min(n - 1));
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
long change;
if (argc != 2)
{
printf("Error\n");
return (1);
}
change = atoi(argv[1]);
printf("%d\n", min(change));
return (0);
}
