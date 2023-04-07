#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - prints the elements of a single link list
 * @h: single linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	printf("\n");
	return (i);
}
