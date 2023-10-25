#include "lists.h"

size_t loop_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_listint_len - Counts the number of nodes
 * in a looped listint_t linked list.
 * @head: A pointer to head of listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of nodes in the list.
 */

size_t loop_listint_len(const listint_t *head)
{
const listint_t *t, *h;
size_t node = 1;

if (head == NULL || head->next == NULL)
return (0);

t = head->next;
h = (head->next)->next;

while (h)
{
if (t == h)
{
t = head;
while (t != h)
{
node++;
t = t->next;
h = h->next;
}
t = t->next;
while (t != h)
{
node++;
t = t->next;
}
return (node);
}
t = t->next;
h = (h->next)->next;
}
return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to head of listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t node, index = 0;

node = loop_listint_len(head);
if (node == 0)
{
for (; head != NULL; node++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < node; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (node);
}
