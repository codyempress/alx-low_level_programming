#include <stdio.h>

/**
 * main - emtry point
 *
 * for - runs a loop to iterate the alphabet
 *
 * Return: returns 0 aftre nd of the loop
 *
 */

int main(void)
{
	int bet;

	for (bet = 'a'; bet <= 'z'; bet++)
	{
		if (bet == 'e')
		{
			continue;
		}
		else if (bet == 'q')
		{ continue;
		};

		putchar(bet);
	};

	putchar('\n');

	return (0);
}
