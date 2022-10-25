#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string
 *
 * return: void
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
	{
		putchar(*(str + 1));
	}
	putchar(*(str + 1));
}
