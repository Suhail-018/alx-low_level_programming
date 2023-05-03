#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - returns the sum of list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n; head =
head->next;
}
return (sum);
}
