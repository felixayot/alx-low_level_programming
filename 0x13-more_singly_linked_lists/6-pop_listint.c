#include "lists.h"
/**
 * pop_listint - Function prototype
 * Description: deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: input pointer to pointer to first node
 * Return: head node’s data (n) or 0 (empty list)
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *thenext;
if (*head == NULL)
{
return (0);
}
data = (*head)->n;
thenext = (*head)->next;
free(*head);
*head = thenext;
return (data);
}
