#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: string
 *
 * return: void
 */

void puts_half(char *str)
{
	int n = strlen(str);

	int i;

	if (n % 2 == 0)
	{
		int x = n / 2;

		for (i = x; *(str + i) != '\0'; i++)
		{
			printf("%c", *(str + i));
		}
	}
	else if (n % 2 == 1)
	{
		int y = (n - 1) / 2;
		int z = n - y;

		for (i = z; *(str + i) != '\0'; i++)
		{
			printf("%c", *(str + i));
		}
	}
}
