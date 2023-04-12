#include "main.h"
#include <stdlib.h>
/**
  *argstostr - string of all arguments concatenated with new line.
  *@ac: number of arguments.
  *@av: array of arguments.
  *Return: NULL if the number of arguments is 0
  */
char *argstostr(int ac, char **av)
{
	int x, y, z, num;
	char *res;

	num = 0;
	z = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			num++;
			y++;
		}
		num++;
		x++;
	}
	res = malloc((sizeof(char) * num) + 1);
	if (res == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][x])
		{
			res[z] = av[x][y];
			y++;
			z++;
		}
		res[z] = '\n';
		z++;
		x++;
	}
	res[z] = '\0';
	return (res);
}
