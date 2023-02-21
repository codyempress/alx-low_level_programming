#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two integers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1if there aren't two parameters
 */

int main(int argc, char *argv[])
{
	int m, n, s;

	m = atoi(argv[1]);
	n = atoi(argv[2]);

	s = m * n;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", s);
	return (0);
}
