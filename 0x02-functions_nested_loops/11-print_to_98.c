#include "main.h"
/**
 *print_to_98 - prints natural numbers between n and 98
 *@x: parameter
 *
 * Description: function prints natral numbers
 *
 * Return: always 0
 */

void print_natural_numbers(int x)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
			printf("%d\n", n);
		}
		else
		{
			while(n < 98)
			{
				printf("%d ", n++);
				printf("%d\n", n);
			};
		};
	};
	return (0);
}
