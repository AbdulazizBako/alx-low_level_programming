#include "main.h"
/**
 * char *_strcpy - is a pointer function that copies a string
 * @dest: copy to this variable
 * @src: copy form this variable
 *
 * Return: returns dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
