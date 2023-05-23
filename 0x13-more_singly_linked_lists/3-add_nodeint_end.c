#include "lists.h"
/**
 * add_nodeint_end - Adds a new node 
 * @head: Pointer headlist.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node;
    listint_t *last_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, set the head pointer to the new node */
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        /* Traverse the list to find the last node */
        last_node = *head;
        while (last_node->next != NULL)
        {
            last_node = last_node->next;
        }

        /* Append the new node to the end of thelist */
        last_node->next = new_node;
    }

    return (new_node);
}
