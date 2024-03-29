#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - fn that frees dog
 * @d: malloc
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
