#include "lists.h"
/**
 * print_list - Function prototype
 * Description: prints all the elements of a list_t list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t num = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("%s\n", h->str);
}
else
{
printf("[0] (nil)\n");
}
num++;
h = h->next;
}
return (num);
}
