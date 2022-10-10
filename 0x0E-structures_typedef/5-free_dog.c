#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the struct dog
 * @d: variable to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
