#include "main.h"

/**
 * print_line - prints line *n
 *
 * @n: receiving input
 * Return: Always 0.
 *
 */

void print_line(int n)
{
int i;
for (i = 0; i < n;  i++)
{
if (n > 0)
{
_putchar('_');
}
else
{
_putchar('\n');
}
}
_putchar('\n');
}
