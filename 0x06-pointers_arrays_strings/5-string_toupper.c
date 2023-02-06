#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes lowercase to uppercase
 * @s: pointer
 * Return: characters
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (s[i] >= 'a' && s[i] >= 'z')
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	return (s);
}
