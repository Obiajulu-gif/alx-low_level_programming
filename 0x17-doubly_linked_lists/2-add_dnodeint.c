#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *  @head: pointer to the head of the list
 * @n: value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
dprintf(2, "Error: can't malloc\n");
}
new_node->n = n;
new_node->prev = NULL;

if (*head == NULL)
{
new_node->next = NULL;
}
else
{
new_node->next = *head;
(*head)->prev = new_node;
}


*head = new_node;
return (new_node);
}
