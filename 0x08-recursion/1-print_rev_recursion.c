#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints string	in reverse
 * *s: string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i;

	i = sizeof(s);

	if (i >= 0)
	{
		_putchar(*(s + i));
		i--;

		_print_rev_recursion(s + i);
	}
	_putchar('\n');
}
