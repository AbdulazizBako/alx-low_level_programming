#include <stdio.h>

/**
 * main - a fibonacci series sum numbers
 *
 * Return: Always returns 0.
 *
 */
int main(void)
{
int i, j, k, result;
j = 0;
k = 1;
for (i = 0; i < 4000000; i++)
{
result = j + k;
j = k;
k = result;
if ((result % 2) == 0)
{
int ner;
ner += result;
}
}
printf("%d", result);
putchar('\n');
return (0);
}
