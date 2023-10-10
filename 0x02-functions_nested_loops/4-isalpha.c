#include "main.h"
/**
 * _isalpha - checks if character is a letter
 * @c: check input.
 * return: 0 (success) otherwise 1 (failed)
*/
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
