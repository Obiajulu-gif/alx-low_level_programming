#include "lists.h"

int check_cycle(listint_t *list){
    listint_t *slow_ptr = list;
    listint_t *fast_ptr = list;

    while (slow_ptr && fast_ptr && fast_ptr->next)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;

        /* if the pointer meet, there is a cycle in the list */
        if (slow_ptr == fast_ptr)
        {
            return (1);
        }
        
    }
    return (0);
}