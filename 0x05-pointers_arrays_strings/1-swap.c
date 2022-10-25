#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the two numbers
 * @a: first value
 * @b: second value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int j = *a;
	*a = *b;
	*b = j;
}
