#include "simple_shell.h"

/**
 * _strcmp - Compare the two strings
 * compares the null-terminated strings pointed to by 's1' and 's2'.
 *
 * @str1: The first string to be compared.
 * @str2: The second string to be compared.
 *
 * Return:
 *   - An integer greater than, equal to, or less than 0,
 *   according to whether 'str1' is greater than,
 *   equal to, or less than 'str2' (case-sensitive comparison).
 *   - If 'str1' or 'str2' is NULL, returns -1.
 */
int _strcmp(const char *str1, const char *str2)
{
if (str1 == NULL || str2 == NULL)
{
return (-1);
}

while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
{
str1++;
str2++;
}

return (*str1 - *str2);
}
