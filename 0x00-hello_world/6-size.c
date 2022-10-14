#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if successful
 */

int main(void)
{
	char one= 's';
	int two= 4;
	long three=12345678;
	long long four=1234567890;
	float five =5.78;

	printf("Size of a char is: ", sizeof(one), " byte(s)");
	printf("Size of an int: ",sizeof(two), " byte(s)");
	printf("Size of a long int: ",sizeof(three)," bytes(s)");
	printf("Size of a long long int: ",sizeof(four)," bytes(s)");
	printf("Size of a float: ", sizeof(five)," byte(s)");
	return (0);
}
