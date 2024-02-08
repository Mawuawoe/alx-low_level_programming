#include "lists.h"

/**
 * free_listint - a function that frees a nodes in link list one by one
 * @head: pointer to the first node of the list
 * return: nothing
*/
void free_listint(listint_t *head)
{
    listint_t *temp;
    
    if(head == NULL) /*then link is an empty link list*/
    {
        return;
    }
    while((temp = head) != NULL)
    {
        head = head->next;
        free(temp);
    }
    free(head);
}