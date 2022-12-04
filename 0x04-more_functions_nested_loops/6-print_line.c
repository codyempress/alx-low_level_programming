#include "main.h"

/**
 * print_line - prints line
 *@n: parameter
 *
 * Return: always 0
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > i)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
