#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @size: number of elements
 * @array: array of integers
 * @cmp: pointer to comparison fxn
 *
 * Return: the index of matched int or -1 if none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
