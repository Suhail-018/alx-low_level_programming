#include "lists.h"
#include <stdlib.h> #
include <stdio.h>
/**
free_listint_safe - frees a listint_t linked list
 * @h: pointer to pointer to first node of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *tmp;
if (h == NULL)
return (0);
current = *h;
while (current != NULL)
{
count++;
if (current <= current->next)
{
printf("Freeing node with a loop %p\n", (void *)current);
*h = NULL;
break;
}
tmp = current;
current = current->next;
free(tmp);
}
return (count);
}
