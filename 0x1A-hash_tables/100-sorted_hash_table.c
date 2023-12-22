#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: pointer to the new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *new_table = NULL;
unsigned long int i = 0;

if (size == 0)
return (NULL);

new_table = malloc(sizeof(shash_table_t));
if (new_table == NULL)
return (NULL);

new_table->size = size;
new_table->array = malloc(sizeof(shash_node_t *) * size);
if (new_table->array == NULL)
{
free(new_table);
return (NULL);
}

for (i = 0; i < size; i++)
new_table->array[i] = NULL;

new_table->shead = NULL;
new_table->stail = NULL;

return (new_table);
}

/**
 * shash_table_set - inserts a key/value pair into a sorted hash table
 * @ht: pointer to the hash table
 * @key: key to insert
 * @value: value to insert
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *new_node = NULL, *temp = NULL, *prev = NULL;

if (ht == NULL || key == NULL || value == NULL)
return (0);

temp = ht->shead;
while (temp != NULL && strcmp(temp->key, key) < 0)
{
prev = temp;
temp = temp->snext;
}

if (temp != NULL && strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = strdup(value);
return (1);
}

new_node = malloc(sizeof(shash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->snext = temp;

if (prev == NULL)
ht->shead = new_node;
else
prev->snext = new_node;

if (temp == NULL)
ht->stail = new_node;

return (1);
}

/**
 * shash_table_get - retrieves the value
 * @ht: pointer to the hash table
 * @key: key to search for
 * Return: value associated with the key, or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *temp = NULL;

if (ht == NULL || key == NULL)
return (NULL);

temp = ht->shead;
while (temp != NULL && strcmp(temp->key, key) < 0)
temp = temp->snext;

if (temp != NULL && strcmp(temp->key, key) == 0)
return (temp->value);

return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *temp = NULL;
int flag = 0;

if (ht == NULL)
return;

printf("{");
temp = ht->shead;
while (temp != NULL)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", temp->key, temp->value);
flag = 1;
temp = temp->snext;
}
printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht: pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *temp = NULL;
int flag = 0;

if (ht == NULL)
return;

printf("{");
temp = ht->stail;
while (temp != NULL)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", temp->key, temp->value);
flag = 1;
temp = temp->sprev;
}
printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *temp = NULL, *next = NULL;

if (ht == NULL)
return;

temp = ht->shead;
while (temp != NULL)
{
next = temp->snext;
free(temp->key);
free(temp->value);
free(temp);
temp = next;
}

free(ht->array);
free(ht);
}
