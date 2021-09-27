#include "main.h"
/**
 * print_last_digit - prints the last digit of a function
 *
 * @a: input variable
 * Return: value of the last digit
 */

int print_last_digit(int a)
{
int b;
b = a % 10;
if (b < 0)
{
_putchar(-b + 48);
return (-b);
}
else
{
_putchar(b + 48);
return (b);
}
}
