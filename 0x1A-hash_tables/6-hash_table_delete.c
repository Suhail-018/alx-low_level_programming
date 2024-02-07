#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp, *next;
if (ht == NULL)
return;
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
next = temp->next;
free(temp->key);
free(temp->value);
free(temp);
temp = next;
}
}
free(ht->array);
free(ht);
}
