#include "simple_shell.h"

/**
 * execute - enact every command on the shell
 * @token: Input to be tokenized.
 */
void execute(char **token);
void execute(char **token)
{
char err[61];
pid_t child_pid;
int argu;
char *find, *origin;
char *tail[] = {"dom", NULL};
child_pid = fork();
if (child_pid == -1)
{
perror("cmd not found");
exit(EXIT_FAILURE);
}
else if (child_pid == 0)
{
find = token[0];
while (find != NULL)
{
if (_strchr(find, '/'))
{
if (execve(find, token, tail) == -1)
{
write(STDERR_FILENO, "not found\n", 44);
exit(EXIT_FAILURE);
}
}
else
{
root = search(find);
if (find == NULL)
{
our_snprintf(err, sizeof(err), " Error: %s\n", find);
write(STDERR_FILENO, err, _strlen(err));
exit(EXIT_FAILURE);
}
if (execve(origin, token, tail) == -1)
{
write(STDERR_FILENO, "Error\n", 25);
exit(EXIT_FAILURE);
}
}
}
}
else
{
waitpid(child_pid, &argu, 0);
}
}
