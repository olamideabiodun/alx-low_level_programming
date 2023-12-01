#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    //return null if the hash table size is 0
    hash_table_t *new_table;
    unsigned long int i;
    if (size == 0)
    {
        return NULL;

    }
    // allocates memory for the new table
   
    new_table = malloc(sizeof(hash_table_t));
    // Checks if new table is null (if malloc failed)
    if (new_table == NULL)
    {
        return NULL;
    }
    new_table->size = size;
    new_table->array = malloc(sizeof(hash_node_t *) * size);
    if (new_table->array == NULL)
    {
        // if calloc failed, free memory and return Null
        free(new_table);
        return NULL;
    }
    for (i = 0; i < size; i++)
    {
        new_table->array[i] = NULL;
    }
    // return new table
    return (new_table);
}
