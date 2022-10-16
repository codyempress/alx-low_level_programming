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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;

	printf("Last digit of %d is %d ", n, n%10);

	if (n%10 > 5)
		       	> 5)
	{
		printf ("and is greater than 5\n");
	}
	else if (n%10 == 0)
	{
		printf("and is 0\n");
	}
	else if (n%10 < 0 && n != 0)
	{
		printf("and is less than 6 and not 0\n");
	};
	return (0);
}
