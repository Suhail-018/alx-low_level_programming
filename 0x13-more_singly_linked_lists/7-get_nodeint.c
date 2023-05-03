#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of list.
 * @head: pointer to the head of the list.
 * @index: index of the node to be returned.
 *
 * Return: pointer nth node of the list or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head != NULL && i < index)
{
head = head->next;
i++;
}
return (head == NULL ? NULL : head);
}
