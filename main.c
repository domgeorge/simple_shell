#include "shell.h"

/**
 * main -Entry point to our shell project main function
 * @argc: argument count
 * @argv: argument value
 * Return: 0 Always on (sucess)
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
strn = el_oni(&s_input, &str_ln);
if (strn == -1)
{
break;
}
if (s_input[0] == '#' || (s_input[0] == ' ' && s_input[1] == '#'))
{
continue;
}
str_spl(s_input);
}
free(s_input);
return (EXIT_SUCCESS);
}
