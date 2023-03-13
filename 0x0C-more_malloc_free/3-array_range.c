#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of range min to max
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *new;
	int len = max - min + 1;
	int i = 0;

	if (min > max)
		return (NULL);

	new = malloc(len * sizeof(int));

	if (new == NULL)
		return (NULL);

	while (i < len)
	{
		new[i] = min;
		i++;
		min++;
	}

	return (new);
}
