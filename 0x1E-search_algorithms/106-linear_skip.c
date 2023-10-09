#include "search_algos.h"
/**
 * linear_skip - Function name.
 * Description: Searches for a value in a sorted skip list(singly-linked)
 * of integers using Linear skip search. A node of the express lane is placed
 * at every index which is a multiple of the square root of
 * the size of the list.
 * @list: ptr to the head of the skip list to search in.
 * @value: the value to search for.
 * Return: ptr to the first node where value is located, OR
 * NULL if value is not present in list or head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *node, *skip;

if (list == NULL)
return (NULL);

for (node = skip = list; skip->next != NULL && skip->n < value;)
{
node = skip;
if (skip->express != NULL)
{
skip = skip->express;
printf("Value checked at index [%ld] = [%d]\n",
skip->index, skip->n);
}
else
{
while (skip->next != NULL)
skip = skip->next;
}
}

printf("Value found between indexes [%ld] and [%ld]\n",
node->index, skip->index);

for (; node->index < skip->index && node->n < value; node = node->next)
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

if (node->n == value)
return (node);

return (NULL);
}
