#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num = 0;
char ck = 'a';
while (num <= 9)
{
putchar(num + 48);
num++;
}
while (ck <= 'f')
{
putchar (ck);
ck++;
}
putchar('\n');
return (0);
}

