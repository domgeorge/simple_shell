#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <stddef.h>

#define ULT_CHAR 1024

ssize_t el_obi(char **ptrln, size_t *size);
int our_snprintf(char *string, size_t size, const char *frmt, ...);
char *search(const char *getroute);
void execute(char **token);
char *_strchr(const char *s, int c);
size_t _strlen(const char *s);
int env(void);

#endif
