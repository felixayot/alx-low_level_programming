#include "lists.h"
/**
 * sum_dlistint - Function prototype
 * Description: sums all the data (n) of a dlistint_t linked list.
 * @head: The head of the dlistint_t list.
 * Return: sum of n or 0 (empty list)
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
