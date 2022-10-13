#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
int len = 0, i = 0;
char *sep = ", ", *str;
va_list args;
va_start(args, format);
while (format[len++])
;
while (format[i])
{
if (i + 1 == len)
sep = "";
switch (format[i])
{
case 'c':
printf("%c%s", va_arg(args, int), sep);
break;
case 'i':
printf("%d%s", va_arg(args, int), sep);
break;
case 'f':
printf("%f%s", va_arg(args, double), sep);
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s%s", str, sep);
break;
}
i++;
}
printf("\n");
va_end(args);
}