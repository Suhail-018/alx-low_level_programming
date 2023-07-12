#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the elements of a struct dog variable.
 * @d: A pointer to the struct dog variable to be printed.
 *
 * Return: None.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
