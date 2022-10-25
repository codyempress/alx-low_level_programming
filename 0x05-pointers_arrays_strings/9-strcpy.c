#include "main.h"
/**
* _strcopy - copies a string
* @dest: buffer
* @src: source string
*
* Return: a pointer to destination string
*/

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
