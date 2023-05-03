#include "lists.h"
#include <stdlib.h>
/**
* free_listint - Frees alist.
* @head: A pointer to the head of the listint_t list.
*
*/
void free_listint(listint_t *head)
{
listint_t *current, *next;
if (head == NULL)
return;
current = head;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
