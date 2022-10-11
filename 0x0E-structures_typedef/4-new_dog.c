#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: d
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int len1 = 0, len2 = 0;
d = malloc(sizeof(dog_t));
if (!d || !name || !owner)
{
free(d);
return (NULL);
}
while (name[len1++])
;
while (owner[len2++])
;
d->name = malloc(len1 + 1);
d->owner = malloc(len2 + 1);
if (d->name == NULL || d->owner == NULL)
{
free(d->name);
free(d->owner);
free(d);
return (NULL);
}
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
