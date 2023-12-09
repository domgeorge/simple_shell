#include "simple_shell.h"

/**
 * inbuilt - handler for built-in compounds
 * @array_token: input for tokenization
 * Return: 0 is success
 */
int inbuilt(char **array_token)
{
if (_strcmp(array_token[0], "env set") == 0)
{
return (env_set(array_token));
}
else if (_strcmp(array_token[0], "unset env") == 0)
{
return (env_unset(array_token));
}
else if (_strcmp(array_token[0], "env") == 0)
{
return (env());
}
return (0);
}
