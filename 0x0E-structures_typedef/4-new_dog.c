#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name, *new_owner;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_name = strdup(name);
if (new_name == NULL)
{
free(new_dog);
return (NULL);
}
new_owner = strdup(owner);
if (new_owner == NULL)
{
free(new_name);
free(new_dog);
return (NULL);
}
new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;
free(new_name);
free(new_owner);
return (new_dog);
}

