#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if successful
 */

int main(void)
{
	char one = 's';
	int two = 4;
	long three = 12345678;
	long long four = 1234567890;
	float five = 5.78;

	printf("Size of a char: %d byte(s)\n", sizeof(one));
	printf("Size of an int: %d byte(s)\n", sizeof(two));
	printf("Size of a long int: %d bytes(s)\n", sizeof(three));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(four));
	printf("Size of a float: %d byte(s)\n", sizeof(five));
	return (0);
}
