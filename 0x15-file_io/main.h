#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int close_file(int fd);
int copy_file(int cp_from, int cp_to, char *buf, size_t buf_size);
#endif
