#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp;
int first = 1;
if (ht == NULL)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
if (!first)
printf(", ");
printf("'%s': '%s'", temp->key, temp->value);
temp = temp->next;
first = 0;
}
}
printf("}\n");
}
