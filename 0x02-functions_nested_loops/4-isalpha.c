#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if input is a character
 * @c: input to be checked
 * Return: returns 1 if true else 0'
 *
 */

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
