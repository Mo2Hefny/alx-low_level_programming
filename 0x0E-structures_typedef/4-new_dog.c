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
int len1 = 0, len2 = 0, i;
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
for (i = 0; name[i]; i++)
d->name[i] = name[i];
d->name[i] = name[i];
d->age = age;
for (i = 0; owner[i]; i++)
d->owner[i] = owner[i];
d->owner[i] = owner[i];
return (d);
}
