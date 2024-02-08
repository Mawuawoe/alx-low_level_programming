#include "lists.h"

/**
 * pop_listint - a function that deletes the head node/first node
 * @head: the head that points to the first node of the list
 * return: the head nodes data
*/
int pop_listint(listint_t **head)
{
    int a;
    listint_t *temp;
    temp = *head;
    if(head == NULL || *head == NULL) /*then link is an empty link list*/
    {
        return(0);
    }
    a = temp->n;
    *head = temp->next;
    free(temp);
    return(a);
}