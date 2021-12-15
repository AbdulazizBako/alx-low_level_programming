#include <stdio.h>

/**
 * main - a fibonacci series of 50 numbers
 *
 * Return: Always returns 0.
 *
 */
int main(void)
{
long int i, j, k, result;
j = 0;
k = 1;
for (i = 0; i < 50; i++)
{
result = j + k;
j = k;
k = result;
printf("%ld", result);
if (i < 50 - 1)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

