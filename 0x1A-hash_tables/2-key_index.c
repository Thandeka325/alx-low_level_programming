#include "hash_tables.h"


/**
 * key_index - Gives you the index of a key.
 * @key: Is the key.
 * @size: The Size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Generate the hash using hash_djb2 */
	hash_value = hash_djb2(key);

	/* Return the index by taking modulus with size of the array */
	return (hash_value % size);
}
