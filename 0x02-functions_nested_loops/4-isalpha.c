#include <ctype.h>
/**
 * _isalpha - check letter
 * @c:input
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
