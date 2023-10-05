#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: the number of arguments passed to the program.
 * @argv: an array of pointers to the arguments.
 * Return: returns 0 on success.
 */

int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read;
char buffer[BUFFER_SIZE];

if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
dprintf(2, "Error: Can't open file %s\n", argv[2]);
exit(99);
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
if (write(fd_to, buffer, bytes_read) != bytes_read)
{
dprintf(2, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
}

if (close(fd_from) != 0)
{
dprintf(2, "Error: Can't close fd %d\n", fd_from);
exit(100);
}

if (close(fd_to) != 0)
{
dprintf(2, "Error: Can't close fd %d\n", fd_to);
exit(100);
}

return (0);
}
