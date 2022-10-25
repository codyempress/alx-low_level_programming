#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int len;

	char *rev = s;
	char tmp;

	len = _strlen(s);

	while (*(rev++) != '\0')
	{
		continue;
		rev = rev - 2;
	}

	for (i = 0; i < len / 2; ++i)
	{
		tmp = s[i];
		s[i] = rev[0];
		rev[0] = tmp;
		rev--;
	}
}
