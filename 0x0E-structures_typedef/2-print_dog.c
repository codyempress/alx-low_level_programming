#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to dog
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("(nul)");
	}
	else
	{	printf("Name: %s\n", d->name);
	};

	if (d->age == 0.0)
		printf("(nul)");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("(nul)");
	else
		printf("Owner: %s\n", d->owner);
}
