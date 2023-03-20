#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - function to print dog struct
 * @d: the pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}

	if ((*d).age == 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", (*d).age);
	}

	if ((*d).owner != NULL)
	{
		printf("Owner: %s\n", (*d).owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
