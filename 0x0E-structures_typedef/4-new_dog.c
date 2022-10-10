#include "dog.h"
#include <stdlib.h>
#include <string.h>

 /**
  * new_dog - creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (new_dog->name == NULL)
		return (NULL);
	new_dog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
