#include "search_algos.h"
/**
 * jump_list - Function name.
 * Description: Searches for a value in a sorted list(singly-linked)
 * of integers using the Jump search algorithm.
 * @list: ptr to the head of the list to search in.
 * @size: the number of nodes in the list.
 * @value: the value to search for.
 * Return: ptr to the first node where value is located, OR
 * NULL if value is not present in head or head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump, jump_size;
listint_t *node, *tmp;
if (list == NULL || size == 0)
return (NULL);

jump = 0;
jump_size = sqrt(size);
for (node = tmp = list; tmp->index + 1 < size && tmp->n < value;)
{
node = tmp;
for (jump += jump_size; tmp->index < jump; tmp = tmp->next)
{
if (tmp->index + 1 == size)
break;
}
printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
}

printf("Value found between indexes [%ld] and [%ld]\n",
node->index, tmp->index);

for (; node->index < tmp->index && node->n < value; node = node->next)
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

if (node->n == value)
return (node);

return (NULL);
}
