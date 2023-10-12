#include "main.h"
/**
 * main - function
 *
 * Return: 0
 */
void fizz_buzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
}
printf("\n");
}

int main(void)
{
fizz_buzz();
return (0);
}

// int main(void)
// {
// int i;

// for (i = 1; i <= 100; i++)
// {
// if ((i % 3 == 0) && (i % 5 == 0))
// {
// printf("%s", "FizzBuzz");
// }
// else if (i % 3 == 0)
// {
// printf("%s", "Fizz");
// }
// else if (i % 5 == 0)
// {
// printf("%s", "Buzz");
// }
// else if (i == 100)
// {
// printf("%s", "Buzz");
// }
// else
// {
// printf("%d", i);
// printf(" ");
// }
// }
// return (0);
// }

