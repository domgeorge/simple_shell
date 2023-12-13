#include "simple_shell.h"

void str_div(char *str);

/**
 * str_div - Splits the strings.
 * @str: Input for the string to be split.
 */
void str_div(char *str)
{
char *token, *cut_str = str, *end;
char *delimiter = " \t\n";
char **array_token = malloc(sizeof(char *) * ULT_CHAR);
int count = 0, envy;
char *temp;

for (; *cut_str == ' ' || *cut_str == '\t'; cut_str++)
{
}
end = cut_str + _strlen(cut_str) - 1;
for (; end > cut_str && (*end == ' ' || *end == '\t'); end--)
{
*end = '\0';
}
if (!array_token)
{
perror(" not available");
exit(EXIT_FAILURE);
}
temp = _strtok(cut_str, delimiter);

if (temp != NULL)
{
token = temp;
}
else
{
token = NULL;
}
while (token != NULL)
{
array_token[count] = _strdup(token);
if (array_token[count] == NULL)
{
perror("String tokenization failed");
exit(EXIT_FAILURE);
}
count++;
temp = _strtok(NULL, delimiter);

if (temp != NULL)
{
token = temp;
}
else
{
token = NULL;
}
}
array_token[count] = NULL;
if (count > 0)
{
if (!inbuilt(array_token))
{
execute(array_token);
}
}
for (envy = 0; envy < count; envy++)
{
free(array_token[envy]);
}
free(array_token);
}
