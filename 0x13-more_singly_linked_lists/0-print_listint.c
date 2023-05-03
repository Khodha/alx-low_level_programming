#include "lists.h"

/**
 * print_listint - theis program prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return:returns the number of nodes in the program ;/ number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

