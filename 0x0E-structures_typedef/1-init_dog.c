#include "dog.h"

/**
 * init_dog - dog definition
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = "bingo";
d->age = 2.5;
d->owner = "Emeka";
}
