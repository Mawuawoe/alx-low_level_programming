#include "lists.h"
/**
 * free_list - free a linked list
 * @head: head of a list
 * Return: nothing
*/
void free_list(listp_t **head)
{
    listp_t *temp;
    listp_t *current;
    if(head != NULL)
    {
        current = *head;
        while((temp = current)!= NULL)
        {
            current = current->next;
            free(temp);
        }
        *head = NULL;
    }
}

/**
 * free_listint_safe - frees a linked list
 * @head: head of a list
 * Return: size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
    size_t nnodes = 0;
    listp_t *hptr, *new, *add;
    listint_t *cur;

    hptr = NULL;
    while(*h != NULL)
    {
        new = malloc(sizeof(listp_t));
        if (new == NULL)
        {
            exit(98);
        }
        new->p = (void *)*h;
        new->next = hptr;
        hptr = new;
        add = hptr;

        while(add->next != NULL)
        {
            add = add->next;
            if(*h == add->p)
            {
                *h = NULL;
                free_list(&hptr);
                return(nnodes);
            }
        }
        cur = *h;
        *h = (*h)->next;
        free(cur);
        nnodes++;
    }
    *h = NULL;
    free_list(&hptr);
    return(nnodes);
}