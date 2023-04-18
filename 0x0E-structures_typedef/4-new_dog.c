#include <stdlib.h>
#include "dog.h"

/**
* _strlen - function that returns the length of a string
* @s: string to get the length of
* Return: an int representing the length of the string
*/
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	x++;
	return (x);
}
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: is a pointer to the memory area to be copied to
 * @src: is a pointer to the memory area to be copied from
 * Return: a pointer to the destination string dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	len++;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name:  pointer to the name of the dog
 * @age: the age of the dog
 * @owner: pointer to the owner of the dog
 * Return: a pointer to the new dog or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int num1, num2;

	num1 = _strlen(name);
	num2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (num1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (num2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
