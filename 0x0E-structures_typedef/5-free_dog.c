#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the memory allocated to dog object
 *
 * @d: structure pointer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if ((*d).name)
			free((*d).name);
		if ((*d).owner)
			free((*d).owner);
		free(d);
	}
}
