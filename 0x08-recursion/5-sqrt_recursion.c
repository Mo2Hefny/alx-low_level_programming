#include "main.h"

/**
 * root_check - check square root
 * @n: number
 * @r: root
 * Return: root
 */

int root_check(int n, int r)
{
if (r * r == n)
return (r);
else if (r * r > n)
return (-1);
return (root_check(n, r + 2));
}

/**
 * _sqrt_recursion - get square root
 * @n :number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
if (n % 2)
return (root_check(n, 1));
return (root_check(n, 2));
}
