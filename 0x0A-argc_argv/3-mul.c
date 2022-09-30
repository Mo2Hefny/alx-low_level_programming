#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of string of argumments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int res, a, b;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
res = a * b;
printf("%d\n", res);
return (0);
}
