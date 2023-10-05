#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to be created.
 * @text_content: the content to be written to the file.
 * Return: returns an integer value which is 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd, bytes_written, text_length;

if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
{
return (-1);
}

if (text_content != NULL)
{
text_length = strlen(text_content);
bytes_written = write(fd, text_content, text_length);
if (bytes_written != text_length)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
