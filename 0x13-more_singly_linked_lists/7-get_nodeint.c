#include"lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: the head that points to the first node of the list
 * @index: the nth node
 * return: the pointer to the nth node data
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *temp;
    if (head == NULL)
    {
        return(NULL);
    }
    else
    {
        temp = head;
        /*traverse the list till the last node*/
        for(i = 0; i < index; i++)
        {
            temp = temp->next;
        }
        /*return the current nodes pointer*/
        return(temp);
    }
}
