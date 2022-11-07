#include <stdio.h>
#include <ctype.h>

/**
 * main - adds two numbers
 * @argc: count
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, c;

	a = *argv[1];
	b = *argv[2];
	c = a + b;

	if (a > 0 && b > 0)
	{
		if (argc <= 1)
		{
			printf("0\n");
		}
		else if (!isdigit(a) || !isdigit(b))
		{
			printf("Error\n");
			return (1);
		}

		printf("%d\n", c);
	}
	return (0);
}
