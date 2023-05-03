#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - Frees a list and sets the head to NULL
 * @head: Pointer to a pointer to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
if (head == NULL)
return;
while (*head != NULL)
{
listint_t *temp = (*head)->next;
free(*head);
*head = temp;
}
}
