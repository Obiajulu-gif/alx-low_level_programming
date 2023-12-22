#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node = NULL;
    hash_node_t *temp = NULL;

    if (key == NULL || ht == NULL)
        return 0;

    index = key_index((const unsigned char *)key, ht->size);

    /* Check if the key already exists in the hash table */
    temp = ht->array[index];
    while (temp != NULL)
    {
        if (strcmp(temp->key, key) == 0)
        {
            /* Update the value if the key already exists */
            free(temp->value);
            temp->value = strdup(value);
            return 1;
        }
        temp = temp->next;
    }

    /* Create a new node and set its key and value */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return 0;
    new_node->key = strdup(key);
    new_node->value = strdup(value);

    /* Add the new node at the beginning of the list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}