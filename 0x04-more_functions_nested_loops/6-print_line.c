#include "main.h"

/**
 * print_line - prints line
 *@n: parameter
 *
 * Return: always 0
 */

void print_line(int n)
{
	n = ' ';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar(95);
			n--;
		}
	}
	_putchar('\n');
}
