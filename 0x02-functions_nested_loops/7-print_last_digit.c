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

	_putchar(y %10 + '0');
	return (y);
}
