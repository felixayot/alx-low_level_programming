#include "lists.h"
/**
 * get_nodeint_at_index - Function prototype
 * Description: returns the nth node of a listint_t linked list.
 * @head: input pointer
 * @index: input int
 * Return: nth node or NULL (node doesn't exist)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *present = head;
unsigned int i = 0;
while (present != NULL && i < index)
{
present = present->next;
i++;
}
if (i == index && present != NULL)
{
return (present);
}
else
{
return (NULL);
}
}
