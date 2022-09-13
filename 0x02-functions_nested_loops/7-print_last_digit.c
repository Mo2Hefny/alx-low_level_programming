#include "main.h"
/**
 * print_last_digit - gets last number form input
 * @n: input number
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		n = -n;
		_putchar((n % 10) = '0');
		return (n % 10);
	}
}
