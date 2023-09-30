#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of singly linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *current_node;
listint_t *next_node;

current_node = head;
while (current_node != NULL)
{
next_node = current_node->next;
free(current_node);
current_node = next_node;
}

}
