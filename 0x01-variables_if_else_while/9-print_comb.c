#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a = 0;
while (a <= 9)
{
putchar(a + 48);
if (a <= 8)
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');
return (0);
}
