#include "main.h"
#define BUF_SIZE 1024
int open_file(const char *filename, int flags, mode_t mode);
int copy_file(int fd_from, int fd_to, char *buf, size_t buf_size);
int close_file(int fd);
int print_error(const char *msg, const char *filename, int err_code);
/**
* main - copies the content of a file to another file
* @argc: number of arguments
* @argv: array of arguments
* Return: value
*/
int main(int argc, char **argv)
{
int fd_from, fd_to, close_status;
char buf[BUF_SIZE];

if (argc != 3)
return (print_error("Usage", NULL, 97));
fd_from = open_file(argv[1], O_RDONLY, 0);
if (fd_from == -1)
return (print_error("Error: Can't read from file", argv[1], 98));
fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
close_file(fd_from);
return (print_error("Error: Can't write to", argv[2], 99));
}
if (copy_file(fd_from, fd_to, buf, BUF_SIZE) == -1)
{
close_file(fd_from);
close_file(fd_to);
return (print_error("Error: Can't copy file", NULL, 99));
}
close_status = close_file(fd_from);
if (close_status == -1)
return (print_error("Error: Can't close fd", NULL, 100));
close_status = close_file(fd_to);
if (close_status == -1)
return (print_error("Error: Can't close fd", NULL, 100));
return (0);
}
/**
 * open_file - function to open
 * @filename: input
 * @flags: input
 * @mode: input
 * Return: Value
*/
int open_file(const char *filename, int flags, mode_t mode)
{
int fd = open(filename, flags, mode);
return (fd);
}
/**
 * copy_file - function
 * @fd_from: input
 * @fd_to: input
 * @buf: input
 * @buf_size: input
 * Return: value
*/
int copy_file(int fd_from, int fd_to, char *buf, size_t buf_size)
{
ssize_t n_read, n_written;

while ((n_read = read(fd_from, buf, buf_size)) > 0)
{
n_written = write(fd_to, buf, n_read);
if (n_written == -1 || n_written != n_read)
return (-1);
}
if (n_read == -1)
return (-1);
return (0);
}
/**
 * close_file - function
 * @fd: input
 * Return: value
*/
int close_file(int fd)
{
int close_status = close(fd);
return (close_status);
}
/**
 * print_error - function
 * @msg: input
 * @filename: input
 * @err_code: input
 * Return: Value
*/
int print_error(const char *msg, const char *filename, int err_code)
{
if (filename == NULL)
dprintf(STDERR_FILENO, "%s\n", msg);
else
dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
return (err_code);
}
