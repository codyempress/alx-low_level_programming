#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array with malloc
 * @nmemb: no of array elements
 * @size: size of each byte
 *
 * Return: pointer to new memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(nmemb * size);
	
	if (new == NULL)
		return (NULL);
	
	return (new);
}
