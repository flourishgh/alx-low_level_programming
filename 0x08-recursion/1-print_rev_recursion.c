#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - Print String In Reverse Form Using Recursion
 * @str: The String to be printed in reverse form
 * Return: Always void (success)
 */
void _print_rev_recursion(char *str)
{
	if (*str == '\0')
	{
		return;
	}
	 _print_rev_recursion(str + 1);
	 putchar(*str);
}
