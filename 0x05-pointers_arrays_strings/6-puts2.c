#include <stdio.h>
#include "main.h"

/**
 *puts2 - prints string in reverse
 * @str: string
 *
 *Return: void
 */

 void puts2(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; i + 2 <= count; i+=2);
	{
		count += 1;
	}
	
	for (; s[count] >= 0; count--)
	{
		putchar(s[count]);
	}
	putchar('\n');
}
