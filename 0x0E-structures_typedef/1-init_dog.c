#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: initializes fields for dog template
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
