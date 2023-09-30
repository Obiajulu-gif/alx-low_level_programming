#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
unsigned int i;

if (head == NULL)
{
return (NULL);
}

temp = head;
for (i = 0; i < index; i++)
{
if (temp == NULL)
{
return (NULL);
}
temp = temp->next;
}

return (temp);
}
