#include "lists.h"
/**
 * sum_listint - Function prototype
 * Description: returns the sum of all the data (n) of a listint_t linked list
 * @head: input pointer to first node
 * Return: sum of data (n)
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
