#include "lists.h"
/**
 * insert_nodeint_at_index - Function prototype
 * Description: inserts a new node at a given position.
 * @head: input pointer to pointer to first node
 * @idx: input int
 * @n: input int
 * Return: address of the new node or NULL (failure)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *present;
unsigned int i;
if (head == NULL)
return (NULL);
if (idx == 0)
return (add_nodeint_end(head, n));
present = *head;
for (i = 0; i < idx - 1; i++)
{
if (present == NULL)
return (NULL);
present = present->next;
}
if (present == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = present->next;
present->next = new;
return (new);
}
