#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* is_digit - function that checks string for non-digit characters
* @s: string to be evaluated
* Return: 1 if string is all digits, 0 otherwise
*/
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
* _strlen - function that returns the length of a string
* @s:the string to check
* Return:an int representing the length of the string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
* errors - function that prints error message and exits
*/
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
* main - function that multiplies two positive numbers
* @argc:count of arguments
* @argv:the array of arguments
* Return:0 on success, 1 on failure
*/
int main(int argc, char *argv[])
{
	char *strone, *strtwo;
	int len1, len2, len, i, remn, num1, num2, *output, a = 0;

	strone = argv[1], strtwo = argv[2];
	if (argc != 3 || !is_digit(strone) || !is_digit(strtwo))
	errors();
	len1 = _strlen(strone);
	len2 = _strlen(strtwo);
	len = len1 + len2 + 1;
	output = malloc(sizeof(int) * len);
	if (!output)
	return (1);
	for (i = 0; i <= len1 + len2; i++)
	output[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = strone[len1] - '0';
		remn = 0;
		for (len2 = _strlen(strtwo) - 1; len2 >= 0; len2--)
		{
			num2 = strtwo[len2] - '0';
			remn += output[len1 + len2 + 1] + (num1 * num2);
			output[len1 + len2 + 1] = remn % 10;
			remn /= 10;
		}
		if (remn > 0)
		output[len1 + len2 + 1] += remn;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (output[i])
		a = 1;
		if (a)
		_putchar(output[i] + '0');
	}
	if (!a)
	_putchar('0');
	_putchar('\n');
	free(output);
	return (0);
}
