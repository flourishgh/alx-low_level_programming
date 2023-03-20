#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function that initialize a variable of type dog
 * @d: pointer to the struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	if (d != NULL)
	{
		ptr = d;
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
	}
}
