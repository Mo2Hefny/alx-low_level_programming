#include "main.h"
/**
 * print_last_digit - gets last number form input
 * @n: input number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
		digit = -digit;
	_putchar(digit + '0');
	return (digit);
}
