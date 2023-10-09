#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_p;
	char *namec, *ownerc;

	namec = malloc(sizeof(name));
	if (namec == NULL)
		return (NULL);
	namec = name;
	ownerc = malloc(sizeof(owner));
	if (ownerc == NULL)
		return (NULL);
	ownerc = owner;
	dog_p = malloc(sizeof(struct dog));
	if (dog_p == NULL)
		return (NULL);
	dog_p->name = name;
	dog_p->age = age;
	dog_p->owner = owner;
	return (dog_p);
}
