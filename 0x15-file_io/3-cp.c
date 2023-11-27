#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#define BUF_SIZE 1024
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: value
 */
int main(int argc, char **argv)
{
    int cp_from, cp_to, n_read, n_written, close_status;
    char buf[BUF_SIZE];
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return (97);
    }
    cp_from = open(argv[1], O_RDONLY);
    if (cp_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        return (98);
    }
    cp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (cp_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(cp_from);
        return (99);
    }
    while ((n_read = read(cp_from, buf, BUF_SIZE)) > 0)
    {
        n_written = write(cp_to, buf, n_read);
        if (n_written == -1 || n_written != n_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(cp_from);
            close(cp_to);
            return (99);
        }
    }
    if (n_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(cp_from);
        close(cp_to);
        return (98);
    }
    close_status = close(cp_from);
    if (close_status == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_from);
        close(cp_to);
        return (100);
    }
    close_status = close(cp_to);
    if (close_status == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_to);
        return (100);
    }
    return (0);
}
