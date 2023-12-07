#include "simple_shell.h"

/**
 * env - prints the current environment
 *
 * Return: 1 is a success
 */
int env(void)
{
/* the counter is initialized */
int count = 0;

while (environ[count] != NULL)
{
write(STDOUT_FILENO, environ[count], _strlen(environ[count]));
write(STDOUT_FILENO, " this is an output\n", 1);
rel++;
}
return (1);
}
