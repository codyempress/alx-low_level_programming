#include "main.h"

/**
 * leet - function
 * @l: string
 *
 * Return: string
 */

char *leet(char *l)
{
	int i, j;

	char a[6] = "aeoti";
	char b[6] = "12348";

	i = 0;

	while (*(l + 1) != '\0')
	{
		j = 0;

		while (j <= 4)
		{
			if (*(l + 1) == *(a + j) || *(l + 1) == *(a + j) - 32)
			{
				*(l + 1) = *(b + j);
				break;
			}
			++j;
		}
		++i;
	}
	return (l);
}
