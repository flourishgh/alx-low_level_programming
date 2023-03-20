#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A new type dog with name age and owner
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner
 * Description: A new data type to hold dogs basic information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * init_dog - Function that initialize a variable of type dog
 * @d: pointer to the struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: void
 * Description: Function that initialize a variable of type dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
