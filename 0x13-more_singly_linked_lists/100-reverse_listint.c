#include "lists.h"
/**
 * reverse_listint - Function prototype
 * Description: reverses a listint_t linked list.
 * @head: input pointer to pointer to first node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *past = NULL, *thenext;
while (*head != NULL)
{
thenext = (*head)->next;
(*head)->next = past;
past = *head;
*head = thenext;
}
*head = past;
return (*head);
}
