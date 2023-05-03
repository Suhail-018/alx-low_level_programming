#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a list.
 *
 * @head: a pointer to a pointer to the head of the list.
 * @n: the integer value to store in the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nw_node, *curent;
if (head == NULL)
return (NULL);
nw_node = malloc(sizeof(listint_t));
if (nw_node == NULL)
	return (NULL);
nw_node->n = n;
nw_node->next = NULL;
if (*head == NULL)
{
*head = nw_node;
}
else
{
curent = *head;
while (curent->next != NULL)
{
curent = curent->next;
}
curent->next = nw_node;
}
return (nw_node);
}
