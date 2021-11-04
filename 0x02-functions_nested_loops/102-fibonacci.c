#include <stdio.h>

/**
 * main - a fibonacci series of 50 numbers
 *
 * Return: Always returns 0.
 *
 */
int main(void)
{
int i, result;
result = 0;
for (i = 0; i <= 50; i++)
{
result += i;
printf("%d", result);
if (i < 50)
{
putchar(',');
}
}
putchar('\n');
return (0);
}

