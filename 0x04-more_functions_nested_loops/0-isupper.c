#include "main.h"

/**
 * _isupper - check if letter is uppercase
 * @c: character
 * Return: 1 if ture, 0 otherwise
 */

int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
return (0);
}
