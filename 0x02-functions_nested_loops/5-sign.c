#include "main.h"

/**
 * print_sign - prints out the sign of the number
 * @n: parameter
 *
 * Description: the functions checks and prints the output as per the sign
 *
 * Return : always 0;
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
