#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int open_file(const char *filename, int flags, mode_t mode);
int copy_file(int fd_from, int fd_to, char *buf, size_t buf_size);
int close_file(int fd);
int print_error(const char *msg, const char *filename, int err_code);
#endif
