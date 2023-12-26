#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *traverse = h;
size_t count = 0;
while (traverse != NULL)
{
printf("%d\n", traverse->n);
traverse = traverse->next;
count++;
}
return (count);
}
