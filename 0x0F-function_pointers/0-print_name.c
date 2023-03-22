#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Function to print a given name
 * @name: Name to be printed
 * @f: pointer to a function
 * Retutn: Void
 * Description: Function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
