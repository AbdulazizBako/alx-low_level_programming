#include <stdio.h>

/**
 * print_array - functiont that prints the nth number of an array
 *
 * @a: the receiving pointer
 * @n: the nth number
 *
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
	printf(", ");
}
else
{
	break;
}
}
printf("\n");
}

