#include "main.h"

/**
 *print_alphabet_x10 - functions prints out teh alphabet ten times
 *Description - no arguments
 *
 * Return : void
 *
 */

void print_alphabet_x10(void)
{
	int f;

	for (f = 0; f < 10; f++)
	{
		_putchar('\n');

		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		};

	};

	_putchar('\n');
}
