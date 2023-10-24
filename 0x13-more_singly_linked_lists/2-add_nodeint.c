#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @n: data for the new node
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_n;

new_n = malloc(sizeof(listint_t));
if (!new_n)
return (NULL);

new_n->n = n;
new_n->next = (*head);
(*head) = new_n;

return (*head);
}
