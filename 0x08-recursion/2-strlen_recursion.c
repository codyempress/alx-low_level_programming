#include "main.h"

/**
 * _strlen_recursion - prints out length of a string in recursion
 * s: string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	s = "Editor";

	int i;

	i = 0;

	if (*(s + i) != '\0')
	{
		i++;
	}
	_strlen_recursion(s);

	_putchar('i' + '\0');
	_putchar('\n');

	return (i);
}
