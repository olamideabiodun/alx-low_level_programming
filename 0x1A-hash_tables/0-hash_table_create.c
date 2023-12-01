#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    //return null if the hash table size is 0
    hash_table_t *new_table;
    if (size == 0)
    {
        return NULL;

    }
    // allocates memory for the new table
   
    new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
    // Checks if new table is null (if malloc failed)
    if (new_table == NULL)
    {
        return NULL;
    }
    new_table->size = size;
    new_table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
    if (new_table->array == NULL)
    {
        // if calloc failed, free memory and return Null
        free(new_table);
        return NULL;
    }
    // return new table
    return (new_table);
}
