#include <stdio.h>
#include "main.h"

/**
 * fizzbuzz - checks for multiples of 3 and 5
 * @i: parameter
 *
 * Return: always 0;
 */

int fizzbuzz(int i)
{
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	return (0);
}
