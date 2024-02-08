#include "lists.h"

/**
 * free_listint2 - a function that frees a nodes,and set head to NULL
 * @head: pointer to the first node of the list
 * return: nothing
*/
void free_listint2(listint_t **head)
{
    listint_t *curNode;
    listint_t *nextNode;
    curNode = *head;

    if(*head == NULL) /*then link is an empty link list*/
    {
        return;
    }
    while(curNode->next != NULL)
    {   
        nextNode = curNode->next;
        free(curNode);
        curNode = nextNode;
    }
    *head = NULL;
    free(curNode);
}