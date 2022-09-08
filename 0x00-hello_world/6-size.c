#include <stdio.h>
/**
 * main - entry point
 * Return:0 after printing size of various types
 */
int main(void)
{
	char ch;
	int a;
	long b;
	long long c;
	float f;

	printf("Size of a char: %ul byte(s)\n", (unsigned long)sizeof(ch));
	printf("Size of a int: %ul byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %ul byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %ul byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %ul byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
