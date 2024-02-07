#include "lists.h"

/**
 * list_len - function that return the number of element in list
 * @h: head of the list
 * Return: total number of elements/nodes in the list
*/

/*length of the list*/
size_t list_len(const list_t *h)
{
    int i = 1;
    const list_t *temp;
    temp = h;
    if (temp == NULL)
    {
        return(0);
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
        i ++;
    }
    return(i);
}