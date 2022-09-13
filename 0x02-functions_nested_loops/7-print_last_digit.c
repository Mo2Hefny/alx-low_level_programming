#include "main.h"
/**
 * print_last_digit - gets last number form input
 * @n: input number
 * Return: last digit
 */
int print_last_digit(int n)
{
	n = _abs(n);
	_putchar((n % 10) + '0');
	return (n % 10);
}
