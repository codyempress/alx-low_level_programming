#include <stdio.h>
#include "main.h"

/**
 * print_array - prints integers in order
 * @a: array
 * @n: number of items
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < (n - 1))
	{
		printf("%d, ", *(a + i));
		i++;
	}

	if (i == (n - 1))
	{
		printf("%d", *(a + i));
	}

	printf("\n");
}
