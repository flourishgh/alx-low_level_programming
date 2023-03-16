#include <stdlib.h>
#include "main.h"
/*
 * malloc_checked - Allocate memory using malloc
 * Description: Allocate memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to allocated memory.
 */

void *malloc_checked(usigned int b)
{
	void *mem = malloc(b);
	
	if(mem == NULL)
		exit(98);
	
	return (mem);
}
