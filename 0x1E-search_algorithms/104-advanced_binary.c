#include "search_algos.h"


int binary_recursion(int *array, int left, int right, int value);
/**
* advanced_binary -	function that searches for a value in
* an array of integers using the advanced binary search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int advanced_binary(int *array, size_t size, int value)
{
if (!array || size == 0)
return (-1);
return (binary_recursion(array, 0, (int)size - 1, value));
}

/**
* binary_recursion - function that searches for a value in
* an array of integers using the binary search algorithm in recursion way
* @array: array of integers
* @left: start of an array
* @right: end of array of an array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/

int binary_recursion(int *array, int left, int right, int value)
{
int midle = (left + right) / 2;

printf("Searching in array: ");
print_arr(array, left, right);
if (left >= right)
return (-1);
if (array[midle == value)
{
if (array[midle - 1] != value)
return (midle);
else
return (binary_recursion(array, left--, midle, value));
}
else if (value < array[midle])
return (binary_recursion(array, left, midle - 1, value));
else
return (binary_recursion(array, midle + 1, right, value));
}

/**
* print_arr - print array from start and end
* @array: array of integers
* @s: start index of array
* @e: end index of array
*/
void print_arr(int *array, size_t s, size_t e)
{
size_t i;

for (i = s; i < e; i++)
printf("%d, ", array[i]);
printf("%d\n", array[e]);
}
