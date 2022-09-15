#include "main.h"

/**
 * _isdigit - check if input is digit
 * @c: input
 * Return: 1 if true, 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
return (0);
}
