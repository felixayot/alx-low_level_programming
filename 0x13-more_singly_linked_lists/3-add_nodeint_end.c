#include "lists.h"
/**
 * add_nodeint_end - Function prototype
 * Description: adds a new node at the end of a listint_t list.
 * @head: input pointer to pointer to first node
 * @n: input int
 * Return: address of the new element or NULL (failure)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
listint_t *present = *head;
while (present->next != NULL)
{
present = present->next;
}
present->next = new;
}
return (new);
}
