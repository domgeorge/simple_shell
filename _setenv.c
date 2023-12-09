#include "simple_shell.h"

/**
 * env_set - our code Function to run setenv
 * @token: Token process
 * Return: 1 on true always, else retun 0
 */
int env_set(char **token)
{
if (token[1] == NULL || token[2] == NULL)
{
char *read_char = "env set\n";
while (*read_char)
{
write(STDERR_FILENO, read_char, 1);
read_char++;
}
return (1);
}
else
{
if (setenv(token[1], token[2], 1) != 0)
{
perror("setenv");
return (1);
}

}
return (1);
}
