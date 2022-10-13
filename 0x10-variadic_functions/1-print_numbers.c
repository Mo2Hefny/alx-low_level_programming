#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: separator between printed numbers
 * @n: number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *sep;
va_list args;
va_start(args, n);
if (!separator)
sep = "";
else
sep = (char *) separator;
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i + 1 < n)
printf("%s", sep);
else
printf("\n");
}
va_end(args);
}
