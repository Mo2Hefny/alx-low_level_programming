#include <stdio.h>
#include "main.h"
/**
 * main - print word
 * Return:0
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	putchar('\n');
	return (0);
}
