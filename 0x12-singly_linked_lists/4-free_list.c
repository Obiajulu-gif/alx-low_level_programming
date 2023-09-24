#include "lists.h"
/**
 * free_list - this free the node
 * @head: get the head of the node
 */
void free_list(list_t *head)
{
list_t *current = head;
list_t *temp;

while (current != NULL)
{
temp = current;
current = current->next;

free(temp->str);

free(temp);
}
}
