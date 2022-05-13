#include "main.h"

/**
 *_print - writes char to stdout
 *@c: character to b printed to stdout
 *Return: return 1 on sucess n -1 on error
 */

int _print(char *c)
{
size_t len = 0;
while (c[len] != '\0')
	len++;
return (write(1, &*c, len));
}
