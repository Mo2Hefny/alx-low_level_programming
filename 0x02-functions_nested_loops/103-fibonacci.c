#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long n3 = 3;
	unsigned long long sum = 2;
	int i;

	for (i = 0; n3 <= 4000000; i++)
	{
		n3 = n2 + n1;
		if (n3 % 2 == 0)
			sum += n3;
		n1 = n2;
		n2 = n3;
	}
	printf("%llu\n", sum);
	return (0);
}
