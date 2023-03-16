#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function to allocate memory
 *
 * Description: Allocate memory.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
