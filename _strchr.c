#include "simple_shell.h"

/**
 * _strchr - Locates first occurrence of a char in a string.
 *
 * @s: String to search.
 * @c: Char to find
 *
 * Return: A pointer to the first occurrence of the character 'c' in the string 's',
 *         or NULL if the character is not found.
 */

char *_strchr(const char *s, int c)
{
if (s == NULL)
{
return (NULL);
}

while (*s != '\0')
{
if (*s == c)
{
return ((char *)s);
}
s++;
}

if (c == '\0')
{
return ((char *)s);
}

return (NULL);
}
