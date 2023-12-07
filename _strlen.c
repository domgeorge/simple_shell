#include <simple_shell.h>

/**
* _strlen - Calculates the length of a string.
* @s: The input string.
*
* Return: The length of the string.
*/
size_t _strlen(const char *s)
{
size_t len = 0;

while (*s)
{
len++;
s++;
}

return (len);
}
