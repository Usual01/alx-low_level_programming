#include <stdlib.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates dog
 * @name:name
 * @age:age
 * @owner:owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	return (new_dog);
}
/**
 * _strdup - returns pointer to newly created memory
 * @str: input
 * Return: char
 */

char *_strdup(char *str)
{
	char *ab;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i += 1;
	i += 1;
	ab = malloc(i * sizeof(*dup));
	if (ab == NULL)
		return (NULL);
	while (j < i)
	{
		ab[j] = str[j];
		j += 1;
	}
	return (ab);
}

