#include "lists.h"
#include <string.h>
/**
 * add_node_end - Function prototype
 * Description: adds a new node at the beginning of a list_t list.
 * @head: pointer to head
 * @str: string char
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
list_t *present = *head;
while (present->next != NULL)
{
present = present->next;
}
present->next = new;
}
return (new);
}
