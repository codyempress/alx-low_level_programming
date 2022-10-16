#include <stdio.h>

/**
 * main - entry point
 *
 * for statement - runs a loop to reiterate the alphabet
 *
 * Return: returns 0 at end of program
 *
 */

int main(void)
{
	int a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	};
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	};

	putchar('\n');

	return (0);
}
