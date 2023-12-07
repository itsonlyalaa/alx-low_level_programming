#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of the list
 * @head: head pointer
 * @n: The integer for the new node
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newn;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->prev = NULL;
	newn->next = *head;
	if (*head != NULL)
		(*head)->prev = newn;
	*head = newn;

	return (newn);
}
