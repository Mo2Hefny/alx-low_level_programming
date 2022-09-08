#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Return: 0 after printing sentence
 */
int main(void)
{
	write(1, "and that piece of art is useful\"\n", 33);
	return (0);
}
