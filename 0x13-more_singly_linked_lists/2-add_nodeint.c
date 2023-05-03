#include "lists.h"
#include <stdlib.h>
/**
* *add_nodeint - adds a new node at the beginning of a list.
* @head: a pointer to the head of the list.
* @n: the integer value to store in the new node.
*
* Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nw_node;
if (head == NULL)
return (NULL);
nw_node = malloc(sizeof(listint_t));
if (nw_node == NULL)
return (NULL);
nw_node->n = n;
nw_node->next = (*head);
(*head) = nw_node;
return (nw_node);
}
