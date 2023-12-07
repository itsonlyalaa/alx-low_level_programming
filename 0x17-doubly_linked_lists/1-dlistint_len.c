#include "lists.h"

/**
 * dlistint_len - Counts the number of elements
 * @h: The head
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t node = 0;

while (h)
{
node++;
h = h->next;
}
return (node);
}
