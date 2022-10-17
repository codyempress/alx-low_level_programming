#include <stdio.h>
/**
 * main - entry point
 *
 * Return: returns 0 after loop
 *
 */

int main(void)
{
	int hexy;

	for (hexy = 0; hexy <= 15; hexy++)
	{
		int num = putchar(hexy % 10 + '0');
	};

	putchar('\n');

	return (0);

}
