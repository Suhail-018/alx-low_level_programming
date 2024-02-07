#include "search_algos.h"

/**
* jump_search -	function that searches for a value in
* an array of integers using the jump search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int jump_search(int *array, size_t size, int value)
{
int prev = 0, nstep = 0, len = (int)size;

if (!array || size <= 0)
return (-1);

while (nstep < len && prev < len)
{
if (array[nstep] >= value)
break;
printf("Value checked array[%d] = [%d]\n", nstep, array[nstep]);
prev = nstep;
nstep += (int)sqrt(len);
}
printf("Value found between indexes [%d] and [%d]\n", prev, nstep);
while (prev < len && prev <= nstep)
{
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);
prev++;
}
return (-1);
}
