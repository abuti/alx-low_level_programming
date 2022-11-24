#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a data stracture with different data types
 * @name: name for the dog char*
 * @age: age of the dog float
 * @owner: owner of the dog char*
 * Return: nothing.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
