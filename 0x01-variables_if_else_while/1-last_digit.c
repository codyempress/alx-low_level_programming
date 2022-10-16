#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *
 * if: runs through the code to check the conditions for n
 *
 *Return: returns 0 after execution
 *
 */

int main (void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX /2;

	last = n % 10;

	printf("Last digit of %d is %d ", n, last);

	if (last > 5)
	{
		printf ("and is greater than 5\n");
	}
	else if (last == 0)
	{
		printf("and is 0\n");
	}
	else if last < 0 && n != 0)
	{
		printf("and is less than 6 and not 0\n");
	};
	return (0);
}
