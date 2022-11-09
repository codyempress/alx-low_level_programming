#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *puts2 - prints each character in a string
 * @s: string
 *
 *Return: void
 */

void puts2(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		printf("%c", *(s + i));
		i = i + 2;
	}
	printf("\n");
}
