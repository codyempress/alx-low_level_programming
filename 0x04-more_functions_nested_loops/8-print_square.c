#include "main.h"

/**
 * print_square - prints a square
 * @size: parameter
 *
 * Return: 0
 */

void print_square(int size)
{
	int h, w;

	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
			_putchar('#');
		}

		if (h == size - 1)
		{
			continue;
		}
		_putchar('\n');
	}
}
