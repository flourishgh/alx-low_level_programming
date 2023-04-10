#include "main.h"
/**
 * _putchar - Write to output
 * @c: Character to print (address)
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
