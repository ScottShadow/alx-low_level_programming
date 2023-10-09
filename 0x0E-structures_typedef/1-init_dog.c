#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes man's best friend
 * @d: the dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
