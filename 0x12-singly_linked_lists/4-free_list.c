#include "lists.h"
/**
 * free_list - Function prototype
 * Description: returns the length of a string using recursion
 * @head: pointer to head
 * Return: void
 */
void free_list(list_t *head)
{
list_t *present = head;
while (present != NULL)
{
list_t *temp = present;
present = present->next;
free(temp->str);
free(temp);
}
}
