#include "main.h"
#include <string.h>
/**
* char *_strncat - This function appends the src string to the dest string
* @dest: append from
* @src: append to
* @n: is what it is
* Return: char * dest
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
