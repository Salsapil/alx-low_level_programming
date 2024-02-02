#include "hash_tables.h"
/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: pointer to the new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht;
unsigned long int i;

ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}
for (i = 0; i < size; i++)
ht->array[i] = NULL;
ht->shead = NULL;
ht->stail = NULL;

return (ht);
}

/**
 * shash_table_get - retrieves a value with a key
 * @ht: hash table to retrieve value
 * @key: key to retrieve value
 * Return: value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *node;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
