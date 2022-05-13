#include "main.h"

int main(int ac __attribute((unused)), char **av)
{
size_t size = 10;
int state = 1;
int err = 0;
char *str = malloc(size);
if (str == NULL)
    return(0);
while (state)
{
    _print("#cisfun$ ");
    getline(&str, &size, stdin);
    if (err == 1)
    {
        _print(av[0]);
        _print(": No such file or directory\n");
    }
}
return (0);
}