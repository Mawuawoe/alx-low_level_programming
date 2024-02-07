#include "lists.h"

/**
 * listint_len - function that counts the number of element in list
 * @h: head of the list
 * Return: total number of elements/nodes in the list
*/

/*length of the list*/
size_t listint_len(const listint_t *h)
{
    int i = 1;
    const listint_t *temp;
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