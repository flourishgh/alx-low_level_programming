#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @str: The string to be printed.
 * Return: Always void (Success)
 */
void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
      		putchar('\n');
		return;
         }
putchar(*str);
_puts_recursion(str + 1);
}


