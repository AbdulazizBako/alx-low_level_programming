#include "main.h"

/**
 * print_triangle - a function that prints the shape of a rectangle
 *
 * @size: the recieving input
 *
 * Return: Always 0.
 *
 */

void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < i; j--)
{
if ((i + j) < size)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
