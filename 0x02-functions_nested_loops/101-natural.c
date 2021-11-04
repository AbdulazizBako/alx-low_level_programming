#include <stdio.h>

/**
 * main - Entry point to a function that prints the summ of multiples of 3 & 5
 *
 * Return: Always 0
 *
 */
int main(void)
{
int i, result;
result = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
result += i;
}
}
printf("%d", result);
putchar('\n');
return (0);
}
