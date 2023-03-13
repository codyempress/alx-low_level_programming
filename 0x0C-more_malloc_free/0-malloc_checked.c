#include <stdlib.h>

/**
 * malloc_checked - checks if malloc fails
 * @b: required space in bytes
 *
 * Return: no return value
 */

void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == NULL)
	{
		exit(98);
	}
}
