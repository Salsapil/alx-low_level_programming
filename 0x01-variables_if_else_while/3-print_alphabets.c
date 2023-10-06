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
int x = 65;
for (; i <= 122; i++)
{
putchar(i);
}
for (; x <= 90; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
