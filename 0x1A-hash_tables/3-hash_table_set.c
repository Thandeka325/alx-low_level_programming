#include "hash_tables.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key. key can not be an empty string
 * @value: The value associated with the key.value must be duplicated
 * value can be an empty string
 *
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;
	char *value_copy;
	/* Check for invalid input */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	/* Duplicate the value */
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	/* Get the index for the key */
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	/* Check if key already exists and update its value */
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = value_copy;
			return (1); }
		current_node = current_node->next; }
	/* Create a new node for the key/value pair */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0); }
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_copy);
		free(new_node);
		return (0); }
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
