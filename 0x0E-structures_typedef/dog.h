#ifndef DOG_H
#define DOG_H
/**
 * struct dog - man's best friend
 * @name: the dogs name
 * @age: sadly wont go beyond 20
 * @owner: the lucky man
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/*function prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
