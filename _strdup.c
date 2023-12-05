#include "simple_shell.h"

/**
* _strdup - Duplicates a string using dynamic memory allocation
* @str: The string to duplicate
*
* Return: A pointer containing some strings
* or NULL if memory is insufficient or str is NULL
*/
char *_strdup(const char *str)
{
char *duplicate;
unsigned int length, i;

if (str == NULL)
return (NULL);

/* Calculate the length of the string */
for (length = 0; str[length] != '\0'; length++)
;

/* Alloc memory for dup string (+1 for the null terminator) */
duplicate = malloc(sizeof(char) * (length + 1));

if (duplicate == NULL)
{
write(STDERR_FILENO, "FAILED TO ALLOCATE MEMORY\n", 25);
return (NULL);
}

/* Copy the characters from str to duplicate */
for (i = 0; i <= length; i++)
duplicate[i] = str[i];

return (duplicate);
}
