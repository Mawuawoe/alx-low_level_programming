#include "lists.h"

/**
 * free_list - a function that frees a nodes in link list one by one
 * @head: head of the list
 * return: nothing
*/

void free_list(list_t *head)
{
    list_t *temp;
    temp = head;

    if(head == NULL)/*then link is an empty link list*/
    {
        return;
    }
    while(temp->next != NULL)
    {
         temp = temp->next;
         free(temp);
    }
    free(head);
}