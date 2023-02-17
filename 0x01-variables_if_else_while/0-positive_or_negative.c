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
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%d %s", n, "is zero\n");
return (0);
}
if (n < 0)
{
printf("%d %s", n, "is negative\n");
}
else
{
printf("%d %s", n, "is positive\n");
}
return (0);
}
