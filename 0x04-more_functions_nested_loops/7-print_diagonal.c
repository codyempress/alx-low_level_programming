#include "main.h"

/**
 * print_diagonal - prints diagonals
 * @n: number of times
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		while (n > i)
		{
			_putchar(' ');
			i++;
		}

		_putchar(92);
		_putchar('\n');
	}
}
