#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * @void - no parameters
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}

		_putchar(i);
	}
	_putchar('\n');
}
