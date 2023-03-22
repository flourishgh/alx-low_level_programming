#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer.
 * @array: The array of nnumbers to be compared
 * @size: Size of the input array
 * @cmp: A pointer to the function to be used to compare values;
 * Return: 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(*array++))
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
