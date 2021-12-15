#include <stdio.h>

/**
 * main - a fibonacci series sum numbers
 *
 * Return: Always returns 0.
 *
 */
int main(void)
{
int j, k, result = 0, sum = 0;
j = 0;
k = 1;
while (result < 4000000)
{
result = j + k;
j = k;
k = result;
if ((result % 2) == 0)
{
sum += result;
}
}
printf("%d", sum);
putchar('\n');
return (0);
}

