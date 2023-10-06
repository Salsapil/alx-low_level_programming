#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: C program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i = 97;
for (; i <= 122; i++)
{
if (i == 113 || i == 101)
{
continue;
}
else
{
putchar(i);
}
}
putchar('\n');
return (0);
}
