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
		int i;

		for(i = 0; i < size; i++)
			d[i] = c;
	}

	printf("\n");

	return (&d[0]);
}
