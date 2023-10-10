#include "main.h"
#include <stdio.h>
/**
 * main - entry point for c program
 * Description: C program that print alphabet.
 * Return: always 0 (success)
*/
void print_alphabet(void)
{
char l;
for (l = 97; l <= 122; l++)
{
_putchar(l);
}
_putchar('\n');
}
