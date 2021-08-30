#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int a;
int b;
int c = 0;
while (c <=9)
{
b = 0;
while (b <= 9)
{
a = 0;
while (a < 10)
{
if ((a != b) && (b != c) && (a > b) && (c > b))
{
putchar(b + 48);
putchar(a + 48);
putchar(c + 48);
if (b + a + c <= 24)
{
putchar(',');
putchar(' ');
}
}
a++;
}
b++;
}
c++;
}
putchar('\n');
return (0);
}

