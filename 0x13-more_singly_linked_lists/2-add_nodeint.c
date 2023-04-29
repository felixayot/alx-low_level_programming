#include "lists.h"
/**
 * add_nodeint - Function prototype
 * Description: adds a new node at the beginning of a listint_t list.
 * @head: input pointer to pointer head
 * @n: input int
 * Return: address of the new element or NULL (failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
