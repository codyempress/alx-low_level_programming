#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t coount = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		coount++;
		temp = temp->next;
	}

	return (coount);
}
