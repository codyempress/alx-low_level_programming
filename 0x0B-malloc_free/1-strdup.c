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
	int g = strlen(str) + 1;

	char *t = (char *)malloc (g * sizeof(char));

	t = strdup(str);

	if (str == NULL || t == NULL)
	{
		return (NULL);
	}
	else
	{
		return (t);
	};
	printf("\n");
}
