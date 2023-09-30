#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to head of list
 * @index: index of the new node
 * @n: integer to store in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
listint_t *new_node, *current_node, *previous_node;
unsigned int i;

if (head == NULL)
{
return (NULL);
}

if (index == 0)
{
return (add_nodeint(head, n));
}

current_node = *head;
for (i = 0; current_node != NULL && i < index; i++)
{
previous_node = current_node;
current_node = current_node->next;
}

if (current_node == NULL && i == index)
{
return (add_nodeint_end(head, n));
}
else if (current_node == NULL)
{
return (NULL);
}

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = current_node;
previous_node->next = new_node;

return (new_node);
}
