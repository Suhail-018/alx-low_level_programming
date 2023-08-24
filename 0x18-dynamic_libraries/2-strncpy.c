#include "main.h"
#include <string.h>
/**
* char *_strncpy - This function copies  the src string to the dest string
* @dest: copy to
* @src: copy from
* @n: is what it is
* Return: char * dest
*/
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
