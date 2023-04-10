#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the bits
 * @index: the position
 * Return: 1 (success) or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int vv = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	vv <<= index;
	vv = ~vv;
	*n &= vv;
	return (1);
}
