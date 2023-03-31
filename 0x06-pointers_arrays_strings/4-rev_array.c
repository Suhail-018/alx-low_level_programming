#include "main.h"
/**
* reverse_array - Write a function that reverses the content of an array of int
* @a: array pointer parametr
* @n: length of the array
* Return: 0
*/
void reverse_array(int *a, int n)
{
int *start = a;
int *end = a + n - 1;
while (start < end)
{
int temp = *start;
*start++ = *end;
*end-- = temp;
}
}
