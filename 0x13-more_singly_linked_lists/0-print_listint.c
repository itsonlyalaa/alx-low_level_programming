#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the listint_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *h);
{
size_t ls = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
ls++;
}
return (ls);
}
