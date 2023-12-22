#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 * Description: If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
int flag = 0;
hash_node_t *node = NULL;

if (ht == NULL)
{
return;
}

printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
if (flag == 1)
{
printf(", ");
}
printf("'%s': '%s'", node->key, node->value);
flag = 1;
node = node->next;
}
}
printf("}\n");
}
