#include "main.h"
#include "1-main.h"
/*
 * main - entry poin
 *
 * Return :always 0
 *
 */

int main()
{
	void print_function(void)
	{
	char c[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;
	for (i = 0; i < '27'; i++)
	{
		_putchar(c[26]);
	};
	_putchar('\n');
	return (0);
	};
};
