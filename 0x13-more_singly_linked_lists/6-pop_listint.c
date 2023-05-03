#include "lists.h"

/**
 * pop_listint - deletes the head node in a linked list
 * @head: pointer to the first element of the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty in the program 
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

