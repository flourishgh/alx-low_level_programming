#include "main.h"
/**
 * binary_to_uint - convert binary to base 10
 * @b: Base 2 number
 * Return: decimal numeral or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = strlen(b);
	int power = len - 1;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num +=(unsigned int) (b[i] - '0') * custom_pow(2, power);
		power--;
	}
	return (num);
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
