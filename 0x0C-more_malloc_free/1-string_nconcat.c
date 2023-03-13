#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concantenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 *
 * Return: pointer to a newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1 = strlen(s1) - 1;
	int i = 0;
	unsigned int j = 0;

	char *new = malloc((l1 + 2 + n) * sizeof(char));

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	if (new == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}

	if (n >= strlen(s2))
		n = strlen(s2);

	while (j <= n)
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i + 1] = '\0';

	return (new);
}
