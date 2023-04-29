#include "lists.h"
/**
 * find_listint_loop - Function prototype
 * Description: finds the loop in a linked list.
 * @head: input double pointer to first node
 * Return: address of the node where the loop starts or NULL (no loop)
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *speedy = head;
while (speedy && speedy->next)
{
slow = slow->next;
speedy = speedy->next->next;
if (slow == speedy)
{
slow = head;
while (slow != speedy)
{
slow = slow->next;
speedy = speedy->next;
}
return (slow);
}
}
return (NULL);
}
