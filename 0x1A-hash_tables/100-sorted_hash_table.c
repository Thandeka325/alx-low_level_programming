#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if an error occurs.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL); }
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 * shash_table_set - Adds an element in a hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @ht: The hash table you want to add or update the key/value to.
 * @value: The value associated with key.value must be duplicated
 * value can be an empty string
 *
 * Return: 1 on success, otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *temp;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1); }
		temp = temp->next; }
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	value_copy = strdup(value);
	if (new->key == NULL || value_copy == NULL)
	{
		free(new->key);
		free(new);
		return (0); }
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new; }
	else
	{
		shash_node_t *current = ht->shead;

		while (current && strcmp(current->key, key) < 0)
			current = current->snext;
		if (current == NULL)
		{
			new->sprev = ht->stail;
			ht->stail->snext = new;
			ht->stail = new;
			new->snext = NULL; }
		else
		{
			new->snext = current;
			new->sprev = current->sprev;
			if (current->sprev)
				current->sprev->snext = new;
			else
				ht->shead = new;
			current->sprev = new; }}
	return (1);
}
/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table you want to look into.
 * @key: The key to get the value of.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next; }
	return (NULL);
}
/**
 * shash_table_print - Prints sorted hash table in order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int comma_flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->shead;

	while (node != NULL)
	{
		if (comma_flag)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		comma_flag = 1;
		node = node->snext; }
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints sorted hash table in order in reverse.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int comma_flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->stail;

	while (node != NULL)
	{
		if (comma_flag)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		comma_flag = 1;
		node = node->sprev; }
	printf("}\n");
}
/**
 * shash_table_delete - Deletes the sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;
	node = ht->shead;

	while (node != NULL)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp; }
	free(ht->array);
	free(ht);
}
