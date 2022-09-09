#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * Return:0 after getting last digit
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n %= 10);
	if (n > 5)
		printf("and is greater than 5");
	else if (n == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");
	return (0);
}
