#include "lists.h"
/**
 * free_linked_list - free a linked list
 * @head: head of a list
 * Return: on return
*/
void free_linked_list(listp_t **head)
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
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: head of the list
 * Returns: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
    size_t nodes = 0;
    listp_t *hptr, *new, *add;
    hptr = NULL;
    while(head != NULL)
    {
        new = malloc(sizeof(listp_t));
        if (new == NULL)
        {
            exit(98);
        }
        new->p = (void *)head;
        new->next = hptr;
        hptr = new;
        add = hptr;
        while (add->next != NULL)
        {
            add = add->next;
            if(head == add->p)
            {
                printf("-> [%p] %d\n", (void *)head, head->n);
                free_linked_list(&hptr);
                return(nodes);
            }
        }
        printf("[%p] %d\n", (void *)head, head->n);
        head = head->next;
        nodes++;
    }
    free_linked_list(&hptr);
    return(nodes);
}