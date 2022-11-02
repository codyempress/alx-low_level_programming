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
	int n;

	n = sizeof(*s + 1);

	s[n] = '\0';

	int i;

	for (*(s + n) = '\0'; *(s + n - i) <= 0; i++)
		putchar(*(s + n - i));

	putchar('\n');
}
