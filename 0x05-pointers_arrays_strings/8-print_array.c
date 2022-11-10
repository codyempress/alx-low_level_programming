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

	if (i == (n - 1))
	{
		printf("%d\n", *(a + i));
	}
	else
	{
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", *(a + i));
		};
	}
	printf("\n");
}
