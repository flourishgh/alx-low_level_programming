#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog owner
 * Return: Return the pointer of a dog struct
 * Description: Function that creates a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dog;

	Dog = malloc(sizeof(dog_t));

	if (Dog == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(Dog);
		free(owner);
		return (NULL);
	}

	if (owner == NULL)
	{
		free(Dog);
		free(name);
		return (NULL);
	}

	Dog->name = name;
	Dog->age = age;
	Dog->owner = owner;

	return (Dog);
}
