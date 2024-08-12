#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void check_arguments(int argc);
int open_file(const char *filename, int flags, mode_t mode);
void close_file(int fd);

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Description: Copies content from file to anaother file
 * If requirements are not met exits with an exit code
 *
 * Return : Always returns 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes;
	char buffer[BUFFER_SIZE];

	check_arguments(argc);
	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, read_bytes) != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(fd_from);
			close_file(fd_to);
			exit(99); }}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_file(fd_from);
		close_file(fd_to);
		exit(98); }
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}

/**
 * check_arguments - Checks the number of arguments
 * @argc: Number of arguments
 */
void check_arguments(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_file - Opens a file with specified flags and mode
 * @filename: The name of the file to open.
 * @flags: The flags to use when openning the file
 * @mode: The mode to se when creating the file
 * Return: The file descriptor on success, or exit with an error code
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit((flags & O_CREAT) ? 99 : 98); }
	return (fd);
}

/**
 * close_file - Closes a file descriptor and checks for errors
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
