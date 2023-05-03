#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints list.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current, *check;
current = head;
while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;
check = current->next;
while (check != NULL && check < current)
{
printf("-> [%p] %d\n", (void *)check, check->n);
count++;
check = check->next;
}
current = current->next;
}
return (count);
}
