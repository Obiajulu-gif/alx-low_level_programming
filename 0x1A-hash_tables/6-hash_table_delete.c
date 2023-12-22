#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 * Description: If ht is NULL, don’t do anything
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node = NULL, *tmp = NULL;

if (ht == NULL)
{
return;
}

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
tmp = node;
node = node->next;
free(tmp->key);
free(tmp->value);
free(tmp);
}
}
free(ht->array);
free(ht);
}
