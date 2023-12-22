#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to find index of
 * @size: size of the array of the hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value;
unsigned long int index;

hash_value = hash_djb2(key);

index = hash_value % size;

return (index);
}
