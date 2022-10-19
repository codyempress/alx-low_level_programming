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
	char t;

	for (hexy = 48; hexy <= 57; hexy++)
	{
		putchar(hexy);
		hexy++;
	}
	for (t = 'a'; t <= 'f'; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
