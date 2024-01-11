#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int x = 0;
hash_node_t *node;

while (x < ht->size)
{
while (ht->array[x] != NULL)
{
node = ht->array[x]->next;
free(ht->array[x]->key);
free(ht->array[x]->value);
free(ht->array[x]);
ht->array[x] = node;
}
x++;
}
free(ht->array);
free(ht);
}
