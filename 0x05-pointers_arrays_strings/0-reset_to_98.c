#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - updates value to 98
 * @n: pointer
 *
 * Return: 0
 */

void reset_to_98(int *n)
{
	int g = 10;

	n = &g;
	*n = 98;
}
