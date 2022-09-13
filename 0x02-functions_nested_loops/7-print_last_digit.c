#include "main.h"
/**
 * print_last_digit - gets last number form input
 * @n: input number
 * Return: last digit
 */
int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
