#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: C program with if statments
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;
int lastd;


srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
/* your code goes there */
if (lastd > 5)
{
printf("%d is %s", n, "and is greater than 5");
}
else if (lastd == 0)
{
printf("%d is %s", n, "and is 0");
}
else
printf("%d is %s", n, "and is less than 6 and not 0");
return (0);
}
