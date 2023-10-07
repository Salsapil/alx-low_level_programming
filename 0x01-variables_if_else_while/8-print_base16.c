#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: C program that prints numbers in base sixteen
 *
 * Return: Always return 0 (success)
*/
int main(void)
{
int num;
int l;
for (num = 48; num <= 57; num++)
{
putchar(num);
}
for (l = 97; l <= 102; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
