#include "lists.h"

/**
*add_nodeint_end - adds a new node at the end
*of a list listint_t.
*@head: head of the linked list.
*@n: data to new element
*Return: address of the head.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_n;
listint_t *tmp = *head;

new_n = malloc(sizeof(listint_t));
if (!new_n)
return (NULL);

new_n->n = n;
new_n->next = NULL;

if (*head == NULL)
{
*head = new_n;
return (new_n);
}

while (tmp->next)
tmp = tmp->next;

tmp->next = new_n;

return (new_n);
}
