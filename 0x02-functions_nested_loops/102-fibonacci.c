#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int n3;
	int i;

	printf("%d, %d", n1, n2);
	for (i = 0; i < 48; i++)
	{
		n3 = n1 + n2;
		printf(", %d", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
