#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

if (*head == NULL)
return (-1);
if (index == 0)
{
if (current->next != NULL)
current->next->prev = NULL;
*head = current->next;
free(current);
return (1);
}
while (current != NULL)
{
if (i == index)
{
if (current->next != NULL)
current->next->prev = current->prev;
current->prev->next = current->next;
free(current);
return (1);
}
current = current->next;
i++;
}
return (-1);
}
