#include "simple_shell.h"
/**
 * search - searches for the full path of a given cmd
 * @getroute: pointer to char
 *
 * Return: NULL if path is not found
 */
char *search(const char *getroute)
{
char routebuff[1024];
const char *dir_path = getenv("PATH");
char *route1 = _strdup(dir_path);
char *route2 = _strdup(route1);
char *path;
if (route1)
{
perror("Not found");
return (NULL);
}
for (path = strtok(route2, ":"); path != NULL; path = strtok(NULL, ":"))
{
our_snprintf(routebuff, sizeof(routebuff), "%s/%s", path, getroute);
if (access(routebuff, X_OK) == 0)
{
free(route1);
free(route2);
return (strdup(routebuff));
}
}
free(route1);
free(route2);
return (NULL);
}
