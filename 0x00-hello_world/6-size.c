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

	printf("Size of a char is:%d\n ", sizeof(one), " byte\(s\) \n");
	printf("Size of an int:%d\n ", sizeof(two), " byte\(s\) \n");
	printf("Size of a long int:%d\n ", sizeof(three), " bytes\(s\) \n");
	printf("Size of a long long int:%d\n ", sizeof(four), " bytes\(s\) \n");
	printf("Size of a float:%d\n ", sizeof(five), " byte\(s\)");
	return (0);
}
