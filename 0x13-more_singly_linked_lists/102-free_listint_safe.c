#include "lists.h"
/**
 * free_listint_safe - Function prototype
 * Description: frees a listint_t list.
 * @h: input double pointer to the first node
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
size_t num = 0;
listint_t *temp;
if (h == NULL || *h == NULL)
return (num);
while (*h != NULL)
{
temp = (*h)->next;
free(*h);
num++;
if (temp >= *h)
{
*h = NULL;
exit(98);
}
*h = temp;
}
return (num);
}
