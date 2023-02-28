#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *g = malloc(((strlen(s1) + strlen(s2) + 1) * sizeof(char)));
	if (s1 == NULL || s2 == NULL || g == NULL)
		return (NULL);
	else
	{
		size_t i, j = 0;

		while (s1[i] != '\0')
		{
			g[i] = s1[i];
			i++;
		}
		
		while( s2[j] != '\0')
		{
			g[i]  = s2[j];
			i++;
			j++;
		}
	}
	return (g);
}
