#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * if: statement checks if the number is less, equal or greater than 0;
 *
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n")

	if(num>0)
	{
		printf("is positive");
	
	}
	else if(num==0)
	{
		printf("is zero");
	}
	else
	{
		printf("is negative");
	}
}

