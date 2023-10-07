#include <stdio.h>
/**
 * main - Entry point C program
 *
 * Description: C program to print pattern
 *
 * Return: Always 0 Success
*/
int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
if (num == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
