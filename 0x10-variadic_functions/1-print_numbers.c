#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(nums);

	if (separator == NULL)
	{
	};

	va_start(nums, n);

	for (i = 0; i <= n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d", va_arg(nums, int));
			printf("%s", separator);
		}
		else if (i == (n - 1))
			printf("%d", va_arg(nums, int));
	};

	printf("\n");
}
