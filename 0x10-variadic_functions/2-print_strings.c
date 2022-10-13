#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: separator between printed strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *sep, *str;
va_list args;
va_start(args, n);
if (!separator)
sep = "";
else
sep = (char *) separator;
if (n > 0)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
for (i = 1; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("%s(nil)", sep);
else
printf("%s%s", sep, str);
}
printf("\n");
va_end(args);
}
