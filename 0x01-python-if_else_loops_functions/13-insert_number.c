#include "lists.h"
/**
 * create_node - creates a new node
 * @number: number to be inserted
 * Return: new node
 */
listint_t *create_node(int number)
{
listint_t *new_node;
new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL)
{
printf("Memory allocation failed\n");
exit(EXIT_FAILURE);
}
new_node->n = number;
new_node->next = NULL;
return (new_node);

}

/**
 * insert_node - inserts a node in a sorted linked list
 * @head: pointer to the head of the list
 * @number: number to be inserted
 * Return: new node
 */
listint_t *insert_node(listint_t **head, int number)
{
listint_t *new_node;
new_node = create_node(number);
if (*head == NULL || number < (*head)->n)
{
new_node->next = *head;
*head = new_node;
}
else
{
listint_t *current;
current = *head;
while (current->next != NULL && current->next->n < number)
{
current = current->next;
}
new_node->next = current->next;
current->next = new_node;
}
return (new_node);
}
