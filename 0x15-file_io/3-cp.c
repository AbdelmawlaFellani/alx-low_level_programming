#include "main.h"
char *init_buffer(char file);
void close_fd(int fd);

char *init_buffer(char file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFSIZE);

	if (!buffer)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

void close_fd(int fd)
{
	int check;

	check = close(fd);

	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Entry point
 *
 * @ac : argument counter
 * @av : argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
	int fd_src, fd_dest, r, w;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = init_buffer(av[2]);
	fd_src = open(av[1], O_RDONLY);
	r = read(fd_src, buff, BUFSIZE);
	fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (r > 0)
	{
		if (fd_dest == -1 || w = write(fd_dest, buff, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_src);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}	
	close_fd(fd_src);
	close_fd(fd_dest);

	return (0);
}
