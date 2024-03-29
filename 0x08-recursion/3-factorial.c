#include "main.h"

/**
 * factorial - prints factorial of number
 * @n: integer
 * Return: the factorial of the given number
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
