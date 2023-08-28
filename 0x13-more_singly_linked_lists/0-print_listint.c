#include "lists.h"

/**
 * print_instint - print every elements of list a
 * listint_t list
 * @h: the target list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	if(h == NULL)
		return(0);

	while (h != NULL)
	{
		printf("d\n", h->);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
