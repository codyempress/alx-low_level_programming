#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: string
 *
 *Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
