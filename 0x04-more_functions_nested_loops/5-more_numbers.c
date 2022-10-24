#include "main.h"

/**
 * more_numbers - prints multiples
 *
 * Return: no return
 */

void more_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + 48);
			}
			_putchar(i % 10 + 48);
		}
		_putchar('\n');
	}
}
