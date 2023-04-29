#include "lists.h"
/**
 * listint_len - Function prototype
 * Description: returns the number of elements in a linked listint_t list
 * @h: input pointer to first node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
