#include "hash_tables.h"
/**
 * hash_table_set - adds element to the hash table
 * @ht: the pointer to the has table
 * @value: value to add to the hash table
 * 
 * Return: 1 if it succeed, 0 if otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node;
    char *value_dup;
    unsigned long int index, i;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_dup = strdup(value);
    if (value == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    for (i = index; ht->array[i]; i++)
    {
        if (strcmp(ht->array[i]->key, key) == 0)
        {
            free(ht->array[i]->value);
            ht->array[i]->value = value_dup;
            return (1);
        }
    }
    
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        free(value_dup);
        return (0);
    }
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        // free(value_dup);
        free(new_node);
        return (0);
    }
    new_node->value = value_dup;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

    return (1);
}
