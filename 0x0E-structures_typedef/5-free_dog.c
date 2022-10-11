#include "dog.h"

/**
 * free_dog - frees dog from memory
 * @d: pointer to dog
 */

void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
