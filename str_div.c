#include "simple_shell.h"

void str_div(char *str);

/**
* str_div - splits the strings
* @str: input for string to be splited
*/
void str_div(char *str)
{
char *token, *cut_str = str;
char *delimiter = " \t\n";
char **array_token = malloc(sizeof(char *) * ULT_CHAR);
int count = 0;
int i;

if (!array_token)
{
perror("Memory allocation failed");
exit(EXIT_FAILURE);
}

while ((token = _strtok(cut_str, delimiter)) != NULL)
{
array_token[count] = _strdup(token);
if (array_token[count] == NULL)
{
perror("String tokenization failed");
exit(EXIT_FAILURE);
}
count++;
cut_str = NULL;
}

array_token[count] = NULL;

if (count > 0)
{
if (!inbuilt(array_token))
{
execute(array_token);
}
}

for (i = 0; i < count; i++)
{
free(array_token[i]);
}
free(array_token);
}
