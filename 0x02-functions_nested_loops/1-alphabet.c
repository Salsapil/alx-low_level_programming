#include"main.h"
/**
 * print_alphabet - Entry point for c program.
 * Description: C program using print_alphabet.
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char let;
for (let = 97; let <= 122; let++)
{
_putchar(let);
}
_putchar('\n');
}
