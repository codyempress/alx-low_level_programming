#include "main.h"
/*
 * print_alphabet - prints the alphabet in lowercase
 * @void - does not take any parameters
 *
 * print-alphabet function prints out the aplhabet in small caps
 *
 * Return :always 0
 *
 */
void print_alphabet(void)
{

	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	};
	_putchar('\n');
}
