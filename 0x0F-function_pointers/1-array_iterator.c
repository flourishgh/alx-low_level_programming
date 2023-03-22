#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Function to execute a given parameters
 * @array: The array of the given element
 * @size: The isze of the array
 * @action: The function to execute
 * Description: Functionto execute a given parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
