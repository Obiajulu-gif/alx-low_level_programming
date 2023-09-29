#include "lists.h"

/**
 * listint_len - this print the number of node presence
 * @h: get the node
 * Return: give out the number of node
 */
size_t listint_len(const listint_t *h)
{
size_t count;
const listint_t *current = h;

count = 0;

while (current != NULL)
{
count++;
current = current->next;
}

return count;
}
