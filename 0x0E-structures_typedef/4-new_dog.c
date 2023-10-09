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
	char *namec = name, *ownerc = owner;

	(void)ownerc;
	(void)namec;
	dog_p = malloc(sizeof(struct dog));
	if (dog_p == NULL)
		return (NULL);
	dog_p->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog_p->name == NULL)
	{
		free(dog_p);
		return (NULL);
	}
	dog_p->name = name;

	dog_p->age = age;

	dog_p->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog_p->owner == NULL)
	{
		free(dog_p);
		free(dog_p->name);
		return (NULL);
	}
	dog_p->owner = owner;
	return (dog_p);
}
