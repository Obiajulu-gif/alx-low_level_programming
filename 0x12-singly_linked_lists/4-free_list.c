#include "lists.h"

void free_list(list_t *head){
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