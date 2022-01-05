#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 *
 *
 */

int main(void)
{
int i, j = 1, k = 2, result = 0;
printf("%d, %d", j, k);
for (i = 0; i < 99; i++)
{
result = j + k;
j = k;
k = result;
putchar(',');
putchar(' ');
printf("%d", result);
}
putchar('\n');
return (0);
}

