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
	int j = n - 1;
	int temp[n];

	while (j >= 0)
	{
		temp[i] = a[j];
		j--;
		i++;
	}
}
