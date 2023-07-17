#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure pour Poppy
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: définition d'un new type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
