#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: number of src bytes
 *
 * return: result
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	i = j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	if (src[j] != src[n])
	{
		while ((dest[i++] = src[j++]) != '\0')
		;
	}
	dest[i] = '\0';
	return (dest);
}
