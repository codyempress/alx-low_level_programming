#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 *
 *Return: void
 */

void print_rev(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count += 1;
	}

	for (; count > 0; count--)
	{
		putchar(s[count]);
	}
	putchar('\n');
}
