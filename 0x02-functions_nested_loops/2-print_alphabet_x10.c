#include "main.h"

/*
 *print_alphabet_x10 - functions prints out teh alphabet ten times
 *@void - no arguments
 *
 * Return : void
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i * 10);
	};
	_putchar('\n');
}
