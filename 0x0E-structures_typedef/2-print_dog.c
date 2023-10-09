#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints all the elements of dog in readable format
 * @d: the dog
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
