#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - function to determine sting length
 * @str: string
 * Return: returns length
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - function copies from src to dest
 * @dest: string destination
 * @src: string source
 * Return: returns string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 * Return: returns new dog details
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo;
	int d_name, d_owner = 0;

	if (name != NULL && owner != NULL)
	{
		d_name  = _strlen(name) + 1;
		d_owner = _strlen(owner) + 1;
		dogo = malloc(sizeof(dog_t));

		if (dogo == NULL)
			return (NULL);

		dogo->name = malloc(sizeof(char) * d_name);

		if (dogo->name == NULL)
		{
			free(dogo);
			return (NULL);
		}
		dogo->owner = malloc(sizeof(char) * d_owner);

		if (dogo->owner == NULL)
		{
			free(dogo->name);
			free(dogo);
			return (NULL);
		}
		dogo->name  = _strcpy(dogo->name, name);
		dogo->owner = _strcpy(dogo->owner, owner);
		dogo->age = age;
	}
	return (dogo);
}
