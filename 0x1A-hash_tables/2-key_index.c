#include "hash_tables.h"

/**
 * key_index - gives the index of the key.
 * @key: a string
 * @size: the size of array of hash table.
 *
 * Return: Index number for the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
