#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - craetes a new dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nl, ol, i;

	struct dog *n_dog = NULL;

	nl = 0
	while (name[nl] != '\0')
		nl++;
	ol = 0;
	while (owner[ol] != '\0')
		ol++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(nl + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(ol + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= nl; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= nl; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
