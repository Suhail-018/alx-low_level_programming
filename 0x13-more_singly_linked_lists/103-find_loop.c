#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - Finds the node where a loop starts in a linked list.
 * @head: A pointer to the first node of the list.
 *
 * Return: If a loop is found, a pointer to the node where it starts.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;
if (head == NULL || head->next == NULL)
return (NULL);
slow = head->next;
fast = head->next->next;
while (fast != NULL)
{
if (slow == fast)
break;
slow = slow->next;
fast = fast->next;
if (fast != NULL)
fast = fast->next;
}
if (fast == NULL)
return (NULL);
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
