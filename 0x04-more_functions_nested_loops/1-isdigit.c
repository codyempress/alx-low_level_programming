#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks the input for a digit
 * @c: parameter
 * Return: returns 1 if digit is found
 */

int _isdigit(int c)
{
	if (isdigit(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
