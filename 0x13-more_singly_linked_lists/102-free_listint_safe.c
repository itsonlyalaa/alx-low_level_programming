#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
size_t ls = 0;
int df;
listint_t *tmp;

if (!h || !*h)
{
return (0);
}
while (*h)
{
df = *h - (*h)->next;
if (df > 0)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
ls++;
}
else
{
free(*h);
*h = NULL;
ls++;
break;
}
}
*h = NULL;
return (ls);
}
