#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 to ten
 * @void: no parameters
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
