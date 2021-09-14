#include "main.h"
/**
 * print_alphabet_x10 - print alphabets in lowercase x 10
 *
 * Return - Always 0.
 */

void print_alphabet_x10(void)
{
char ch[] = "abcdefghijklmnopqrstuvwxyz";
unsigned int i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 0; i < (sizeof(ch) / sizeof(ch[0])) - 1; i++)
_putchar(ch[i]);
_putchar('\n');
}
}
