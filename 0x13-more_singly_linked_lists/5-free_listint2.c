#include "lists.h"
/**
 * free_listint2 - Function prototype
 * Description: frees a listint_t list.
 * @head: input double pointer to first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *present = *head;
if (head == NULL)
return;
while (present != NULL)
{
listint_t *the_next = present->next;
free(present);
present = the_next;
}
*head = NULL;
}
