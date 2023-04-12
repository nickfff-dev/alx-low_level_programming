#include "main.h"
#include <stdlib.h>
/**
  *argstostr - joins all arguments of program.
  *@ac: argument count.
  *@av: pointer to array of arguments.
  *Return: NULL if ac == 0 pointer to new string or NULL if it fails.
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, num;
	char *res;

	num = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			num++;
			j++;
		}
		num++;
		i++;
	}
	res = malloc((sizeof(char) * num) + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			res[k] = av[i][j];
			j++;
			k++;
		}
		res[k] = '\n';
		k++;
		i++;
	}
	res[k] = '\0';
	return (res);
}
