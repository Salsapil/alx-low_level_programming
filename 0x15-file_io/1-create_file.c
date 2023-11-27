#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * read_textfile - function
 * @filename: name of the file to create
 * @text_content: text content inside the file
 * Return:
 */
int create_file(const char *filename, char *text_content)
{
int fd, n_written;
if (filename == NULL)
    return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
    return (-1);
if (text_content != NULL)
{
n_written = write(fd, text_content, strlen(text_content));
if (n_written)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
