#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *cuent = *head;
listint_t *next = NULL;
while (cuent != NULL)
{
next = cuent->next;
cuent->next = prev;
prev = cuent;
cuent = next;
}
*head = prev;
return (*head);
}
