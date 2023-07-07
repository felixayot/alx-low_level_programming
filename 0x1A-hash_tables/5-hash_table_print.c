#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
int i;
unsigned char comma_f = 0;
if (ht == NULL)
return;
printf("{");
for (i = 0; (unsigned long)i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
if (comma_f == 1)
printf(", ");
node = ht->array[i];
while (node != NULL)
{
printf("'%s' : '%s'", node->key, node->value);
node = node->next;
if (node != NULL)
printf(", ");
}
comma_f = 1;
}
}
printf("}\n");
}
