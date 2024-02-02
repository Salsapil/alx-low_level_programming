#include "hash_tables.h"
/**
 * key_index - Gives tthe index of a key.
 * @key: is the key
 * @size: the size of the array of the hash table
 * Return: value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
