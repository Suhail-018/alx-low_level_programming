#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *new_str;
if (str == NULL)
{
return (NULL);
}
new_str = strdup(str);
if (new_str == NULL)
{
return (NULL);
}
return (new_str);
}
