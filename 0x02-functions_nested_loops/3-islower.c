#include <ctype.h>
/**
 * _islower - checks lowercase
 * @c: input char
 * Return: 0 - if false and 1 - if true
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
