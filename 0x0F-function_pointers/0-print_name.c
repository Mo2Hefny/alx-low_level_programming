#include "function_pointers.h"

/**
 * print_name - pointer to functions
 * @name: string to print
 * @f: function to callback
 */

void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
