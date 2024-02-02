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
 * shash_table_set - adds an element to a sorted hash table
 * @ht: hash table to add element to
 * @key: key of element to add
 * @value: value of element to add
 * Return: 1 or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *node, *temp;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0')
return (0);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
{
free(node->value);
node->value = strdup(value);
if (node->value == NULL)
return (0);
return (1);
}
node = node->next;
}

node = malloc(sizeof(shash_node_t));
if (node == NULL)
return (0);
node->key = strdup(key);
if (node->key == NULL)
{
free(node);
return (0);
}
node->value = strdup(value);
if (node->value == NULL)
{
free(node->key);
free(node);
return (0);
}
node->next = ht->array[index];
ht->array[index] = node;

if (ht->shead == NULL)
{
node->sprev = NULL;
node->snext = NULL;
ht->shead = node;
ht->stail = node;
}
else if (strcmp(node->key, ht->shead->key) < 0)
{
node->sprev = NULL;
node->snext = ht->shead;
ht->shead->sprev = node;
ht->shead = node;
}
else
{
temp = ht->shead;
while (temp->snext != NULL && strcmp(temp->snext->key, node->key) < 0)
temp = temp->snext;
node->sprev = temp;
node->snext = temp->snext;
if (temp->snext == NULL)
ht->stail = node;
else
temp->snext->sprev = node;
temp->snext = node;
}
return (1);
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
