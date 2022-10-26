#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *puts2 - prints string in reverse
 * @str: string
 *
 *Return: void
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i + 2 <= len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
