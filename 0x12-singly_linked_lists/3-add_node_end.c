#include"lists.h"

/**
 * add_node_end a function that add nodes to the end of list
 * @head: head
 * @str: the value new ode to be added
 * return: the pointer of new node
*/

list_t *add_node_end(list_t **head, char *str)
{
    /*create a new node*/
    list_t * newNode;
    list_t *temp;
    newNode = (list_t *)malloc(sizeof(list_t));
    /*malloc can fail so we check if newnode is null*/
    /*anytime malloc fails it returns null*/

    if (newNode == NULL)
    {
        return(NULL);
    }

    newNode->str = strdup(str);
    newNode->len = strlen(str);

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