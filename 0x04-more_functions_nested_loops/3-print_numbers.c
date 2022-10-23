#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 to ten
 * @void: no parameters
 */

void print_numbers(void)
{
	int i;

	while (i < 10)
	{
		_putchar(i + '0');
		_putchar('\n');
		i++;
	}
}
