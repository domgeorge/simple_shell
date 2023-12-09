#include "simple_shell.h"

/**
 * env_unset - our func code will  run unsetenv
 * @token: Token process
 * Return: 1 on true always,else return 0
 */
int env_unset(char **token)
{
if (token[1] == NULL)
{
char *read_char = "env unset\n";
while (*read_char)
{
write(STDERR_FILENO, read_char, 1);
read_char++;
}
return (1);
}
else
{
if (unsetenv(token[1]) != 0)
{
perror("unset env");
return (1);
}
}
return (1);
}
