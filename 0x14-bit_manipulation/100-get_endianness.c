#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* get_endianness - checks the endianness of the machine
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *) &x;
return (*c);
}

