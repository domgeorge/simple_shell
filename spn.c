#include "simple_shell.h"

/**
 * _strspn - Calculate the length of the initial segment of 'str'
 * consisting only of characters in 'accept'.
 *
 * @str: The input string.
 * @accept: The set of characters to search for.
 *
 * Return: The length of the initial segment of 'str'
 * consisting only of characters in 'accept'.
 */

size_t _strspn(const char *str, const char *accept)
{
size_t count = 0;

while (*str != '\0' && strchr(accept, *str) != NULL)
{
count++;
str++;
}

return (count);
}

/**
 * _strcspn - Calculate the length of the initial segment of 'str'
 * consisting only of characters not in 'reject'.
 *
 * @str: The input string.
 * @reject: The set of characters to search for.
 *
 * Return: The length of the initial segment of 'str'
 * consisting only of characters not in 'reject'.
 */

size_t _strcspn(const char *str, const char *reject)
{
size_t count = 0;

while (*str != '\0' && strchr(reject, *str) == NULL)
{
count++;
str++;
}

return (count);
}
