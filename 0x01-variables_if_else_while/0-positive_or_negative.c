#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * if: statement checks if the number is less, equal or greater than 0;
 *
 * Return: returns 0 after flow
 *
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("%d", n);

	if (n > 0)
	{
		printf(" is positive\n");
	}
	else if (n == 0)
	{
		printf(" is zero\n");
	}
	else
	{
		printf(" is negative\n");
	};
	return (0);
}

