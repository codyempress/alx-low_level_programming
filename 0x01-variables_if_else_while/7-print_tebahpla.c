#include <stdio.h>

/**
 * main - entry point
 *
 * Return: returns 0 after loop
 *
 */

int main(void)
{
	int i;

	for(i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
