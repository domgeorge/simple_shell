#include "simple_shell.h"

/**
 * our_snprintf - Formats string and places it in a buffer
 * @string: The destination buffer
 * @size: Buffer size destination
 * @frmt: String format
 *
 * Return: The written character number (not including null terminator)
 * or a negative value for an error
 */
int our_snprintf(char *string, size_t size, const char *frmt, ...)
{
va_list args;
int result;

if (string == NULL || frmt == NULL || size == 0)
{
/* Invalid arguments */
return (-1);
}

va_start(args, frmt);
result = vsnprintf(string, size, frmt, args);
va_end(args);

if (result < 0 || (size_t)result >= size)
{
/* Error or insufficient buffer size */
return (-1);
}

return (result);
}
