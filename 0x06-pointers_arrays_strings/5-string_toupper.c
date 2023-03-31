#include "main.h"
#include <ctype.h>
/**
* string_toupper - This function changes lowercase to upper case
* @n: string pionter
* Return: n
*/
char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
i++;
}
return (n);
}
