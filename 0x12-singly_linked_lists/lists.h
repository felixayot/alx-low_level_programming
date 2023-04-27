#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct node - data structure for linked list
 * @str: pointer to a char
 * @next: struct node for next node
 * Description: defines a new type struct dog
 */
typedef struct node
{
char *str;
struct node *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void __attribute__((constructor)) before_main(void);

#endif
