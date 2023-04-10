#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 (big endian) or 1(little endian)
 */
int get_endianness(void)
{
	unsigned int test_value = 1;
	char *test_ptr = (char *) &test_value;

	if (*test_ptr == 1)
		return (1);
	return (0);
}
