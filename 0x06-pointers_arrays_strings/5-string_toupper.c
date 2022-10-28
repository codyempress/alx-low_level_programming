#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes lowercase to uppercase
 * @n: pointer
 * Return: characters
 */

char *string_toupper(char *n)
{
	int m;

	m = 0;

	for (n[m] = 0; n[m] != '\0'; m++)
	{
		if (n[m] <= 'z' || n[m] >= 'a')
		{
			n[m] = toupper(n[m]);
		}
	}
	return (n);
}
