#ifndef STRUCT
#define STRUCT

/**
 * struct dog - struct
 * @name: dog's name
 * @age: age
 * @owner: owner's name
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
