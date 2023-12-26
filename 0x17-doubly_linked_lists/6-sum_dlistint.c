#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: pointer to the head of the list
 * Return: the sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
int count = 0;
while (head != NULL)
{
count += head->n;
head = head->next;
}
return (count);
}
