#include "lists.h"

/**
 *list_len - Return the number of element in a list_t list
 * @h: Pointer to the head of the list
 * Return: the length of the node list
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
