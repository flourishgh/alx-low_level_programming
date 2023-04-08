#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>
#define BUFFER_SIZE 1024
char *file_from;
char *file_to;
int fd_to;
int fd_from;
char buffer[BUFFER_SIZE];
char em[128];
ssize_t bytes;
ssize_t wbytes;
void print_error_and_exit(int code, const char *message);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int fflag = O_WRONLY | O_CREAT | O_TRUNC;
mode_t fperm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
#endif
