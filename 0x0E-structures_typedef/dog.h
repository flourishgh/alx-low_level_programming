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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
