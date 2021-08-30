#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
int b = 0;
while (b <= 9)
{
a = 0;
while (a < 10)
{
if ((a != b) && (a > b))
{
putchar(b + 48);
putchar(a + 48);
if (b + a <= 16)
{
putchar(',');
putchar(' ');
}
}
a++;
}
b++;
}
putchar('\n');
return (0);
}

