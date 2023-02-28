#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returs pointer to malloc memory
 * @str: string literal
 *
 * Return: a pointer to string
 */

char *_strdup(char *str)
{
	char *t;

	t = malloc(sizeof(char) * strlen(str));

	if (str == 0 || t == NULL || str == NULL)
	{
		return (NULL);
	}
	else
	{
		size_t i;


		for (i = 0; i <= strlen(str) - 1; i++)
		{
			t[i] = *(str + i);
		}
	}
	return (t);
}

