/**
 * _strlen - recieves pointer to a string and count the lenght
 * @s: pointer variable
 *
 * Return: Always 0 return the count value
 */

int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
	;
return (i);
}
