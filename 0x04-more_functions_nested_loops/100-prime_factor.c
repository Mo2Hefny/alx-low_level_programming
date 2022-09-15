#include <stdio.h>

/**
 * main - print largest prime factor
 * Return: 0
 */

int main(void)
{
unsigned long number = 612852475143;
unsigned long n_max;
unsigned long i, n;
int flag = 1;

while (flag)
{
if (number % 2 == 0)
{
number /= 2;
continue;
}
if (number % 3 == 0)
{
number /= 3;
continue;
}
n_max = number / 12;
for (n = 1; n < n_max; n++)
{
i = 6 * n - 1;
if (number % i == 0)
{
flag = 1;
number /= i;
break;
}
i += 2;
if (number % i == 0)
{
flag = 1;
number /= i;
break;
}
flag = 0;
}
}
printf("%lu\n", number);
return (0);
}
