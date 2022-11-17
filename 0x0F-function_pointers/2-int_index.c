#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array
 * @size: size
 * @cmp: pointer to comparison array
 *
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int g = cmp(array[size]);

	if (size <= 0 || g == 0)
		return (-1);
	return (g);
}
