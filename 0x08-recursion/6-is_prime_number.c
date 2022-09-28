#include "main.h"

/**
 * prime_check - check if divisible
 * @n: number
 * @div: divider
 * Return: 0 if divisible, 1 if not divisible
 */

int prime_check(int n, int div)
{
if (div < n / 2)
{
if (n % div == 0)
return (0);
return(prime_check(n, div + 1));
}
return (1);
}

/**
 * is_prime_number - check if prime
 * @n: number
 * Return: 0 if prime, 1 if not prime
 */

int is_prime_number(int n)
{
if (n < 2)
return (0);
return (prime_check(n, 2));
}
