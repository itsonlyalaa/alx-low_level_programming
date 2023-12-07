#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of th list
 * @head: head pointer
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newn, *ax = *head;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	newn->next = NULL;

	if (ax)
	{
		while (ax->next)
			ax = ax->next;
		newn->prev = ax;
		ax->next = newn;
	}
	else
	{
		*head = newn;
		newn->prev = NULL;
	}
	return (newn);
}
