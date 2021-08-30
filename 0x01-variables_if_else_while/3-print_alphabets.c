#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'a';
char ct = 'A';
while (ch <= 'z')
{
putchar (ch);
ch++;
}
while (ct <= 'Z')
{
putchar (ct);
ct++;
}
putchar('\n');

return (0);
}

