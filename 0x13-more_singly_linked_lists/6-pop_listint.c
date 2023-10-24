#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to first element of linked list
 *
 * Return: the data of elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *ks;
int nm;

if (!head || !*head)
{
return (0);
}
nm = (*head)->n;
ks = (*head)->next;
*head = ks;
return (nm);
}
