#include"lists.h"
/**
 * add_nodeint_end - a function that add nodes to the end of list
 * @head: pointer pointing to head
 * @n: the value/data new ode to be added
 * return: the address of new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    /*create a new node*/
    listint_t * newNode;
    listint_t *temp;
    newNode = (listint_t *)malloc(sizeof(listint_t));
    /*malloc can fail so we check if newnode is null*/
    /*anytime malloc fails it returns null*/
    if (newNode == NULL)
    {
        return(NULL);
    }
    newNode->n = n;
    if (*head == NULL) /*check if list is empty*/
    {
        newNode->next = NULL;
        /*redirrect head to point to new node*/
        *head = newNode;
    }
    else
    {
        /*point the next of the new node to what the the last node was pointing to */
        newNode->next = NULL;
        temp = *head;

        /*traversing the linked list and printing each member*/
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        /*temp next should point to newode*/
        temp->next = newNode;   
    }
    return(*head);
}