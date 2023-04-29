#include "lists.h"
/**
 * print_listint - Function prototype
 * Description: prints all the elements of a listint_t list
 * @h: input pointer to first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
num++;
}
return (num);
}
