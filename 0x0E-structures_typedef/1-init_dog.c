#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: user
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog d;
d.name = name;
d.age = age;
d.owner = owner;
}
