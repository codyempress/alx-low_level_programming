#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - prints elements in a list;
 * @h: list
 *
 * Return: number of items in list
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		_putchar((48 + h->n));
		_putchar('\n');
		h = h->next;
		i++;
	}
	return (i);
}
