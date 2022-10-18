#include "main.h"

/*
 * main - entry point
 *
 * Return : void
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		_printchar(i*10);
	};
	_printchar('\n');
}
