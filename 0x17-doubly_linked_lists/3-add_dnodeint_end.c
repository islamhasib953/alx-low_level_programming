#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to head of list
 * @n: integer to add to new node
 * Return: address of new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	new->n = n;
    new->prev = NULL;
	if (!*head)
    {
        *head = new;
        new->next = NULL;
    }
    else
    {
        node = *head;
        while (node->next)
                node = node->next;
        
        node->next = new;
        new->prev = node;
    }
	return (new);
}
