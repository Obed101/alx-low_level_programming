#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table (as name implies) of size @size
 *
 * @size: The size of the hash table (the spaces allocated for nodes)
 * Return: pointer to the hash table on success, else, null
 */
hash_table_t *hash_table_create(unsigned long int size);
