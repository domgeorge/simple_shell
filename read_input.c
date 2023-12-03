#include "shell.h"
/**
 * el_obi - this function reads the input from the user.
 * @ptrln: line pointer
 * @size: pointer to size_t
 *
 * Return: 0 is success
 */
ssize_t el_obi(char **ptrln, size_t *size)
{
int interac_shell = isatty(STDIN_FILENO);
ssize_t read_char;
char *prompt_str;

if (interac_shell)
{
prompt_str = "$ ";
write(1, prompt_str, strlen(prompt_str));
}

read_char = getline(ptrln, size, stdin);

if (!interac_shell && read_char == -1)
return (-1);

if (interac_shell && read_char == -1)
return (-1);

if (interac_shell && read_char > 0 && (*ptrln)[read_char - 1] == '\n')
{
(*ptrln)[read_char - 1] = '\0';
read_char--;
}

return (read_char);
}
