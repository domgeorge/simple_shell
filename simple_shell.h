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
#include <stdarg.h>

#define ULT_CHAR 1024

extern char **environ;

ssize_t el_obi(char **ptrln, size_t *size);
int our_snprintf(char *string, size_t size, const char *frmt, ...);
char *search(const char *getroute);
void execute(char **token);
char *_strchr(const char *s, int c);
size_t _strlen(const char *s);
int env(void);
int env_set(char **token);
void str_div(char *str);
int env_unset(char **token);
int inbuilt(char **array_token);
int _strcmp(const char *str1, const char *str2);
char *_strdup(const char *str);
char *_strtok(char *str, const char *delim);
size_t _strspn(const char *str, const char *accept);
size_t _strcspn(const char *str, const char *reject);

#endif
