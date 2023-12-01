#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
    hash_node_t **array;
    unsigned long int i;
    if (size == 0)
    {
        return NULL;

    }
    if (new_table == NULL)
    {
        return NULL;
    }
    array = (hash_node_t **)calloc(new_table->size, sizeof(hash_node_t *));
    if (array == NULL)
    {
        return NULL;
    }

    for (i = 0; i < size; i++)
    {
        array[i] = NULL;
    }
    new_table->array = array;
	new_table->size = size;
    return (new_table);
}
