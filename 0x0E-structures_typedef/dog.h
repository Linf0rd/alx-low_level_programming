#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - Structure representing a dong.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* Function Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* Function to create a new dog */
dog_t *new_dog(char *name, float age, char *owner);

/* Function that frees dogs */
void free_dog(dog_t *d);

#endif /* DOG_H */
