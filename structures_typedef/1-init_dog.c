#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to structure dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
