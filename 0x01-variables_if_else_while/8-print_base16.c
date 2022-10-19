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
	char t = 'a';

	while (hexy <= 57 && hexy >= 47)
	{
		putchar(hexy + '0');
		hexy++;
	}
	while (t <= 'f')
	{
		putchar(t);
		t++;
	}
	putchar('\n');
	return (0);
}
