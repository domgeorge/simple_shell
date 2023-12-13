#include "simple_shell.h"

char *_strtok(char *str, const char *delim);
/**
 * _strtok - tokenizes a string.
 * this function breaks the input string str into tokens based
 * on the delimiters indicated in the delim string. It maintains
 * state between calls, so it can be used to extract successive tokens
 * from the same string.
 *
 * @str: The input string to be tokenized.
 * @delim: A string that contains the delimiter characters.
 *
 * Return: A pointer to the next token found in 'str'
 * or NULL if there are no tokens are found.
 */

char *_strtok(char *str, const char *delim)
{
static char *finalTokn;
char *token;

if (str != NULL)
{
finalTokn = str;
}
else if (finalTokn == NULL)
{
return (NULL);
}

finalTokn += _strspn(finalTokn, delim);

if (*finalTokn == '\0')
{
finalTokn = NULL;
return (NULL);
}

token = finalTokn;
finalTokn += _strcspn(finalTokn, delim);

if (*finalTokn != '\0')
{
*finalTokn = '\0';
finalTokn++;
}
else
{
finalTokn = NULL;
}

return (token);
}
