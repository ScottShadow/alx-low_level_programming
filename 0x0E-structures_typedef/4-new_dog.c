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
	char *namecopy = name, *ownercopy = owner;
	dog_t *dog_p;

	(void)namecopy;
	(void)ownercopy;
	dog_p = malloc(sizeof(struct dog));
	if (dog_p == NULL)
		return (NULL);
	dog_p->name = name;
	dog_p->age = age;
	dog_p->owner = owner;
	return (dog_p);
}
