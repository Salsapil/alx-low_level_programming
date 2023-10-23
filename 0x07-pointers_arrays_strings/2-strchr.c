#include "main.h"
/**
 * _strchr - function
 * @s: check input
 * @c: check input
 * Return: value
 */
char *_strchr(char *s, char c)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return (&s[i]);
        }
    }
    return (0);
}