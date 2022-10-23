#include "hash_tables.h"

/**
 *hash_table_get - function that retrieves a value associated with a key
 *
 *@ht: hash table you want to look into
 *@key: the key you are looking for
 *
 *Return: the value associated with the element else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *retri;
	unsigned long int index;

	if (key == NULL || ht == NULL)
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	retri = ht->array[index];

	for (; retri != NULL; retri = retri->next)
	{
		if (strcmp(retri->key, key) == 0)
		return (retri->value);
	}
	return (NULL);
}
