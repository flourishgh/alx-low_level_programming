#include <stdio.h>
#include "main.h"
/**
 * _put_recursion - Print String Using Recursion
 * Return: Void
 */
void _puts_recursion(char* str)
{
   if(*str == '\0')
    {
      putchar('\n');
      return;
    }
  putchar(*str);
  _puts_recursion(str+1);
}


