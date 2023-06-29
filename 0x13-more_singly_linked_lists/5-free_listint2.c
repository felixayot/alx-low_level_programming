#include "lists.h"
/**
 * free_listint2 - Function prototype
 * Description: frees a listint_t list.
 * @head: input double pointer to first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head == NULL)
return;
while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}
head = NULL;
}
