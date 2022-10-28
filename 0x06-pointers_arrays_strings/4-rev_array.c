#include "main.h"

/**
 * reverse_array - reverses the contents of the array
 * @a: array
 * @n: number of array elements
 *
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	while (a[i] <= n)
	{
		if (n == '\0')
			continue;
		else
			n--;
	}
}
