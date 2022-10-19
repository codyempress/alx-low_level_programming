#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints natural numbers between n and 98
 *@n: parameter
 *
 * Description: function prints natral numbers
 *
 * Return: always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		if (n == 0)
			printf("%d\n", n);
		else
			printf("%d\n ", n);
				n = n + 1;
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 0)
				printf("%d\n ", n);
			printf("%d ", n);
			n = n - 1;
		};
	};
}
