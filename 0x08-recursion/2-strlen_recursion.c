#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - prints out length of a string in recursion
 * @s: string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int d = strlen(s);

	_putchar(d);
	return (d);
}
