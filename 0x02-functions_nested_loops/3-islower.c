#include "main.h"
#include <ctype.h>
/**
 * _islower - returns 1 if char is lower else 0
 * @c: character to be checked if lower
 * Return: return 1 if true else 0.
 *
 */

int _islower(int c)
{
if (islower(c))
{
	return (1);
}
else
{
return (0);
}
_putchar('\n');
}
