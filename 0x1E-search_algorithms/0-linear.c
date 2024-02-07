#include "search_algos.h"
/**
* linear_search - search for an element in an array
* @array: the array we want to search in
* @size: size of the array
* @value: the target value
* Return: the index of the value or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
size_t icount;

if (!array)
return (-1);
for (icount = 0; icount < size; icount++)
{
printf("Value checked array[%ld] = [%d]\n", icount, array[icount]);
if (array[icount] == value)
return (icount);
}
return (-1);
}
