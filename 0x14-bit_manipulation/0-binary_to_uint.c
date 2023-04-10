#include "main.h"
/**
 * binary_to_uint - convert binary to base 10
 * @b: Base 2 number
 * Return: decimal numeral or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			result <<= 1;
		}
		else if (b[i] == '1')
		{
			result <<= 1;
			result |= 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}
/**
 * custom_pow - Return the power of a number
 * @base: The base number
 * @exponent: The exponent
 * Description: Return power of a number
 * Return: int
 */
int custom_pow(int base, int exponent)
{
	int result = 1;
	int i;

	if (exponent == 0)
		return (1);
	if (exponent > 0)
	{
		for (i = 0; i < exponent; i++)
		{
			result *= base;
		}
	}
	else
	{
		for (i = 0; i > exponent; i--)
		{
			result /= base;
		}
	}
	return (result);
}
