#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long n3;
	int i;

	printf("%lu, %lu", n1, n2);
	for (i = 0; i < 48; i++)
	{
		n3 = n1 + n2;
		printf(", %lu", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
