#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints out a string in recursion
 * @s: string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(s + i);
	}
	else if (*(s + i) == '\0')
	{
		_putchar('\n');
	}
}
