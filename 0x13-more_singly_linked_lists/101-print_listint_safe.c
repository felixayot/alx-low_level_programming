#include "lists.h"
/**
 * print_listint_safe - Function prototype
 * Description: prints a listint_t linked list.
 * @head: input pointer to first node
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t num = 0;
const listint_t *temp = head;
const listint_t *iter = NULL;
while (temp != NULL)
{
printf("[%p] %d\n", (void *)temp, temp->n);
num++;
if (temp->next >= temp)
{
iter = temp;
printf("-> [%p] %d\n", (void *)iter, iter->n);
num++;
exit(98);
}
temp = temp->next;
}
return (num);
}
