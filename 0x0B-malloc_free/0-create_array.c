#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: size of array
 * @c: initial
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *d = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return NULL;
	}
	else
	{
		d[0] = c;
	}

	printf("\n");

	return (&d[0]);
}
