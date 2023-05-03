#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -Deletestheheadnodeoflist and returns the head node's data (n).
 * @head: A pointer to a pointer to the first node in the listint_t list.
 *
 * Return: The head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *temp;
if (*head == NULL)
return (0);
n = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);
return (n);
}
