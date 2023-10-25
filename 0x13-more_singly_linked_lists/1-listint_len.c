#include "lists.h"

/**
 * listint_len - prints a liked lists
 * @h: pointer to first node
 *
 * Return: listint_len of list
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
