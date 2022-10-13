#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int a, b, res;
int (*p)(int, int);
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
op = argv[2];
if ((*op == '/' || *op == '%') && !b)
{
printf("Error\n");
exit(100);
}
if (get_op_func(op) == NULL || argv[2][1])
{
printf("Error");
exit(99);
}
p = get_op_func(op);
res = p(a, b);
printf("%d\n", res);
return (0);
}
