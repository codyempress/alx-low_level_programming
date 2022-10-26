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
	for (i = 0; i + 2 <= len; i+=2);
	{
		count += 1;
	}
	
	for (; s[count] >= 0; count--)
	{
		putchar(s[count]);
	}
	putchar('\n');
}
