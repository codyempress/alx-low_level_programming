#include "main.h"
/*
 * main - entry poin
 *
 * Print_alphabet : prints the alphabet in lowercase
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
