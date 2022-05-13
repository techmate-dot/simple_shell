#include "main.h"

/**
 * main - main entry point for program
 * @ac: counts the number of arg
 * @av: command line arguement
 * Return: return 0 on success
 */

int main(int ac __attribute__((unused)), char **av)
{
size_t size = 10;
int state = 1;
int err = 0;
char *str = malloc(size);
if (str == NULL)
	return (0);
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
