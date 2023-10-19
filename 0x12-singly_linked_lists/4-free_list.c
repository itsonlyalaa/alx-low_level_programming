#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
list_t *timp;

while ((timp = head) != NULL)
{
head = head->next;
free(timp->str);
free(timp);
}
}
