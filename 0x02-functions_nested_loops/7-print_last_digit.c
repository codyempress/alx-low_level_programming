#include "main.h"

/**
 * print_last_digit - prints out the last digit
 * @x: parameter
 *
 * Description: function print out the last digit of a number
 *
 * Return: returns 0
 *
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;


	if (x > 0)
	{
		_putchar(y + '0');
	}
	else if (x > 0)
	{
		_putchar((y + '0') * -1);
	}

	return (y);
}
