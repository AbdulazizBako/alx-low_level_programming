#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 *
 */

int main(void)
{
unsigned long i, n = 612852475143;
for (i = 2; i <= n; i++)
{
if ((n % i) == 0)
{
n = n / i;
printf("%ld ", i);
i --;
}
}
putchar('\n');
return 0;
}

