#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes a struct dog variable with given values.
 * @d: A pointer to the struct dog variable to be initialized.
 * @name: A string representing the name of the dog.
 * @age: A floating-point value representing the age of the dog.
 * @owner: A string representing the owner of the dog.
 *
 * Return: None.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
