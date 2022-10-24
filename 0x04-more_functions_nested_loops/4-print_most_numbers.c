#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * @void - no parameters
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar((c % 10) + '0');
		}
	}
	_putchar('\n');
}
