#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *traverse = h;
size_t count = 0;
while (traverse != NULL)
{
traverse = traverse->next;
count++;
}
return (count);
}
