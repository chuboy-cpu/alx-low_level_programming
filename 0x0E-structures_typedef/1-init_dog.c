#include <stdio.h>
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
struct dog *text = d;
text->name = "bingo";
text->age = 2.5;
text->owner = "Emeka";
}
