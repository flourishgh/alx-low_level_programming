#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion- Return the length of a string
 * @str: The string to count the number of characters
 * Return: The length of @str
 */
int _strlen_recursion(char *str)
{
	int length = 0;
	if (*str == '\0')
	{
		return 0;
	}
	length++;
	length +=_strlen_recursion(str + 1);
	return length;
}
