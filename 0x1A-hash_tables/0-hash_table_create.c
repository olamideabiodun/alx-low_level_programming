#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    //return null if the hash table size is 0
    hash_table_t *new_table;
    hash_node_t **array;
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
    array = malloc(sizeof(hash_node_t *) * size);
    if (array == NULL)
    {
        return NULL;
    }
    // initializing elements of array to null
    for (i = 0; i < size; i++)
    {
        array[i] = NULL;
    }
    new_table->array = array;
	new_table->size = size;
    // return new table
    return (new_table);
}
