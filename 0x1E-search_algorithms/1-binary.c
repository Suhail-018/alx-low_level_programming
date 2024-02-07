#include "search_algos.h"
/**
* binary_search - search for an element in an array
* @array: the array we want to search in
* @size: size of the array
* @value: the target value
* Return: the index of the value or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
size_t r = 0, t = size - 1, p;

if (!array)
return (-1);
while (t >= r)
{
p = (t + r) / 2;
printf("Searching in array: ");
print_arr(array, r, t);
if (array[p] == value)
return (p);
if (array[p] > value)
t = p - 1;
if (array[p] < value)
r = p + 1;
}
return (-1);
}
/**
* print_arr - print a partition of an array
* @array: the array we print
* @s: start index
* @e: end index
*/
void print_arr(int *array, size_t s, size_t e)
{
size_t i;

for (i = s; i <= e; i++)
{
if (i != s)
printf(", ");
printf("%d", array[i]);
}
printf("\n");
}

