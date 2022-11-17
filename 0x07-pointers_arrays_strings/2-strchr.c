#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strchr - locates a character in a string;
 * @s: string
 * @c: character
 *
 * Return: the character at the lowest address
 */

char *_strchr(char *s, char c)
{
	char *t = strchr(s, c);

	if (t == NULL)
	{
		return (NULL);
	}
	else
		return(t);
}
