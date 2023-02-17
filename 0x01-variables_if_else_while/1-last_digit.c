#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<unistd.h>
/**
 *main - Check if number is positive or negative
 *Return: Always return 0
 */
int main(void)
{
int n, lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit == 0)
{
printf("Last digit of %d is %d and is %s", n, lastDigit, "0\n");
return (0);
}
if (lastDigit < 6 )
{
printf("Last digit of %d is %d and is %s", n, lastDigit, "less than 6 and not 0\n");
}
if (lastDigit > 5)
{
printf("Last digit of %d is %d and is %s", n, lastDigit, "greater than 5\n");
}
return (0);
}
