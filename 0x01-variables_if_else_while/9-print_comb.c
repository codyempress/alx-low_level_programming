#include <stdio.h>

/**
 * main - entry point
 *@void: no parameter
 *
 * while - loops
 *
 * Return: returns 0 after execution
 *
 */

int main(void)
{
	int n;

	while (n <= 9)
	{
		putchar ((n % 10) + '0');
		n++;
		
		if (n < 9)
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
