#include "main.h"

/**
 * puts_half - A function that prints half of a string
 *
 * @str: is the receiving pointer
 *
 */
void puts_half(char *str)
{
int i, j;
for (i = 0; str[i] != '\0'; i++)
;
if (i % 2 != 0)
{
j = 0;
for (j = (i / 2) + 1; j < i; j++)
_putchar(str[j]);
}
else
{
j = 0;
for (j = (i / 2); j < i; j++)
_putchar(str[j]);
}
_putchar('\n');
}
