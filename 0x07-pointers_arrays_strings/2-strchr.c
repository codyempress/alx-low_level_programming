#include "main.h"
#include <stdio.h>

/**
 *_strcpy - locates a character in a string;
 * @s: string
 * @c: character
 *
 * Return: the character at the lowest address
 */

char *_strcpy(char *s, char c)
{
	int i = 0;
	char *ch = &c;

	s = "lody";
	c = 'o';

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (ch);
		else if (*(s + i) == '\0' && *(s + i) != c)
			return (NULL);
		i++;
	}

}
