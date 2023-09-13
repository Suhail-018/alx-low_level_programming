#include "hash_tables.h"
#include <string.h>
/**
 * key_index - Calculates the index for a key in the hash table array.
 * @key: The key (string) to be hashed.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value;
if (key == NULL || size == 0)
return (0);
hash_value = hash_djb2(key);
return (hash_value % size);
}

