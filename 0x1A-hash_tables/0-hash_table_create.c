#include "hash_tables.h"
/**
 * hash_table_create - Function prototype
 * Description: creates a hash table.
 * @size: int size of the array
 * Return: pointer to the newly created hash table (Success) or NULL (Failure)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
int i;
hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);
table->size = size;
table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
for (i = 0; (unsigned long)i < table->size; i++)
if (table->array[i] == NULL)
return (table);

return (NULL);
}
