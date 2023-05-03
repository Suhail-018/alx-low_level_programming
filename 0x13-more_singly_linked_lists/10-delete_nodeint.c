#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: double pointer to head of list
 * @index: index of the node to delete, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;
if (*head == NULL)
return (-1);
if (index == 0)
{
current = *head;
*head = (*head)->next;
free(current);
return (1);
}
prev = NULL;
current = *head;
for (i = 0; current && i < index; i++)
{
prev = current;
current = current->next;
}
if (current == NULL)
return (-1);
prev->next = current->next;
free(current);
return (1);
}
