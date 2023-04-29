#include "lists.h"
/**
 * delete_nodeint_at_index - Function prototype
 * Description: deletes the node at index index of a listint_t linked list.
 * @head: input pointer to pointer to first node
 * @index: input int
 * Return: 1 (Success) or -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *present, *past;
unsigned int i;
if (*head == NULL)
return (-1);
if (index == 0)
{
present = *head;
*head = (*head)->next;
free(present);
return (1);
}
past = *head;
present = (*head)->next;
for (i = 1; present != NULL && i <= index; i++)
{
if (i == index)
{
past->next = present->next;
free(present);
return (1);
}
past = present;
present = present->next;
}
return (-1);
}
