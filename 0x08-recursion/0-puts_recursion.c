
#include <stdio.h>
#include "main.h"
/**
 * _put_recursion - Print String Using Recursion
 * Return: Void
 */
void _put_recursion(char* s)
{
 if(*s == '\0')
 {
   putchar('\n');
   return;
 }
  putchar(*s);
  _put_recursion(s+1);
}


