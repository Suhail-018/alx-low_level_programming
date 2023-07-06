#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* flip_bits - Returns the number of bits you would need to flip to get
* @n: the first number.
* @m: the second number.
*
* Return: number of bits to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int count = 0;
while (x > 0)
{
if (x & 1)
count++;
x >>= 1;
}
return (count);
}


