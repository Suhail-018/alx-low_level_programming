#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
*  insert_nodeint_at_index - Inserts a new node at a given position.
* @head: Pointer to the head node of the list.
* @idx: Index of the list where the new node should be added.
* @n: Value to store in the new node.
*
* Return: Address of the new node or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node, *emp;
if (!head)
return (NULL);
new_node = malloc(sizeof(*new_node));
if (!new_node)
return (NULL);
new_node->n = n;
if (!idx)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
emp = *head;
for (i = 0; i < idx - 1; i++)
{
if (!emp)
{
free(new_node);
return (NULL);
}
emp = emp->next;
}
new_node->next = emp->next;
emp->next = new_node;
return (new_node);
}
