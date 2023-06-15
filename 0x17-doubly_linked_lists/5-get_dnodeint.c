#include "lists.h"
/**
 * get_dnodeint_at_index - Function prototype
 * Description: returns the nth node of a dlistint_t linked list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 * Return: the address of the located node or NULL (node doesn't exist)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
