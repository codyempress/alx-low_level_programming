#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - checks if malloc fails
 * @b: required space in bytes
 *
 * Return: no return value
 */

void *malloc_checked(unsigned int b)
{
	void *n = malloc(b);

	if (n == NULL)
	{
		exit(98);
	}
	return n;
}
