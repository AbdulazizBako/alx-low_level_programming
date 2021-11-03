#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: receiving pointer
 *
 *
 */
void rev_string(char *s)
{
int i, j, tmp;
for (i = 0; s[i] != '\0'; i++)
;
j = 0;
for (i = i - 1; j < i; j++)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
i--;
}
}
