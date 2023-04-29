#include "lists.h"
/**
 * free_listint - Function prototype
 * Description: frees a listint_t list.
 * @head: input pointer to first node
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *present = head;
while (present != NULL)
{
listint_t *the_next = present->next;
free(present);
present = the_next;
}
}
