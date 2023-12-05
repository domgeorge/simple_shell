#include "shell.h"

/**
 * main - entry point to the main function
 * @argc: number of cmd line arguments
 * @argv: argument vector: array of strings
 * contains actual cmd line arguments
 *
 * Return: 0 is a success
 */
int main(int argc, char **argv)
{
size_t str_ln = 0;
char *s_input = NULL;
ssize_t strn;
(void)argc;
(void)argv;

for (;;)
{
strn = el_obi(&s_input, &str_ln);

if (strn == -1)
break;

if (s_input[0] == '#' || (s_input[0] == ' ' && s_input[1] == '#'))
continue;

str_spl(s_input);
}

free(s_input);
return (EXIT_SUCCESS);
}
