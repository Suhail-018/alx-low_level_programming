#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each
 * and returns a pointer to the allocated memory. The memory is set to zero.
 *
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in the array.
 *
 * Return: If nmemb or size is 0,  if malloc fails, then _calloc returns NULL.
 * Otherwise, it returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
unsigned int total_size;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < total_size; i++)
{
*((char *)ptr + i) = 0;
}
return (ptr);
}
