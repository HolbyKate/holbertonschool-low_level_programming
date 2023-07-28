#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *toutou;
	int a, b;

	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;
	/* j'alloue de la mémoire à toutou */
	toutou = malloc(sizeof(dog_t));
	if (toutou == NULL)
		return (NULL);
	/* j'alloue de la mémoire à .name & .owner. Si null je free  mémoire */
	toutou->name = malloc(a + 1);
	if (toutou->name == NULL)
	{
		free(toutou);
		return (NULL);
	}
	toutou->owner = malloc(b + 1);
	if (toutou->owner == NULL)
	{
		free(toutou->name);
		free(toutou);
		return (NULL);
	}
	/* je copie les deux éléments demandés */
	strcpy(toutou->name, name);
	strcpy(toutou->owner, owner);
	toutou->age = age;
	return (toutou);
}
