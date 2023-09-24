#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: this is the beginning of the node
 * @str: this is where the data of the string is stored
 * Return: the address of the new element, or NULL if it failed
 */
/*
 * things to keep in mind
 *(iaacs)
 * initialize of new node
 * allocation of node and doing the checks for it
 * assign data value
 * connect nodes
 * save address of the first node in the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
int len;
list_t *new_node, *last;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

if (str == NULL)
{
free(new_node);
return (NULL);
}

for (len = 0; str[len];)
{
len++;
}
new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
last = *head;
while (last->next != NULL)
{
last = last->next;
}
last->next = new_node;
}
return (*head);
}
