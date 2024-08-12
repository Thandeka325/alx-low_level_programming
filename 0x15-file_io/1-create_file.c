#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file to create.
 * @text_content: A NULL terminated string to write to a file
 *
 * Return: 1 on success, -1 on failure or filename is NULL
 * if text_content is NULL create an empty file
 * if file already exists, truncate it
 * created file should have rw------- permisions
 * If the file already exists, do not change the permissions.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytes_written = write(fd, text_content, len);

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
