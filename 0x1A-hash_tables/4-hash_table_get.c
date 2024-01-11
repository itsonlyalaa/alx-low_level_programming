#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with the key.
 * @ht: a pointer to the hash table array.
 * @key: a string that cannot be empty.
 *
 * Return: the value associated with the key, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int indx;
hash_node_t *node;

if (ht == NULL)
return (NULL);
if (key == NULL)
return (NULL);
indx = key_index((unsigned char *)key, ht->size);
if (ht->array[indx] == NULL)
return (NULL);
if (strcmp(ht->array[indx]->key, key) == 0)
return (ht->array[indx]->value);
node = ht->array[indx];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
