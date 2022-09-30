#include <stdio.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of string of argumments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
(void) argc;
while (*argv)
{
printf("%s\n", *argv);
argv++;
}
return (0);
}
