#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * Return: returns void
 *
 */
void times_table(void)
{
	int i, j, times;
for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		times = i * j;
		if (j == 0)
		{
		_putchar('0' + times);
		}
		else if (times <= 9)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + times);
		}
		else if (times > 9)
		{
		_putchar(',');
		_putchar(' ');
		_putchar('0' + times / 10);
		_putchar('0' + times % 10);
		}
	}
_putchar('\n');
}
}
