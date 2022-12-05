#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts binary number to unsigned integer
 * @b: contains numbers to be converted
 *
 * Return: returs converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, len = 0, result = 0;

	if (b == NULL)
		return (0);

	while (*(b + len))
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		if (b[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
	return (result);
}
