#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: The value
 * @index: The postion
 * Return: returns the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask <<= index;

	if ((n & mask) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
