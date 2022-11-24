#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return:dog_t new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int n_len = 0, o_len = 0, i = 0;
	dog_t *nd;

	while (name[n_len] != '\0')
		n_len++;
	while (owner[o_len] != '\0')
		o_len++;
	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		free(nd);
		return (NULL);
	}
	(*nd).name = malloc(n_len * sizeof((*nd).name));
	if ((*nd).name == NULL)
	{
		free((*nd).name);
		free(nd);
		return (NULL);
	}
	while (i < n_len)
		(*nd).name[i] = name[i];
	(*nd).age = age;
	(*nd).owner = malloc(o_len * sizeof((*nd).name));
	if ((*nd).owner == NULL)
	{
		free((*nd).owner);
		free(nd);
		return (NULL);
	}
	for (i = 0; i <= o_len; i++)
		(*nd).owner[i] = owner[i];
	return (nd);
}
