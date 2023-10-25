#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: pointer to the first element in the list
 * @index: index of node to delete
 *
 * Return: returns 1 if (Success), or -1 if (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head;
listint_t *crnt = NULL;
unsigned int x = 0;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}

while (x < index - 1)
{
if (!tmp || !(tmp->next))
return (-1);
tmp = tmp->next;
x++;
}

crnt = tmp->next;
tmp->next = crnt->next;
free(crnt);

return (1);
}
