#include <stdio.h>
#include "main.h"

/**
 * _strlen - measures length of string
 * @s: parameter
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
	}
	return (c);
}
