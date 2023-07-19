#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: pointer to name of dog
 * @age: the dog's age
 * @owner: pointer to dog owner
 *
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *dog_1;

	/*calculating length of name string*/
	for (i = 0 ; name[i] != '\0'; i++)
		;
	i++;
	/*calculating the length of owner*/
	for (j = 0; owner[j] != '\0'; j++)
		;
	j++;
	dog_1 = malloc(sizeof(dog_t));
	if (dog_1 == NULL)
		return (NULL);

	dog_1->name = malloc(i * sizeof(dog_1->name));
	if (dog_1->name == NULL)
	{
        	free(dog_1);
		return (NULL);
	}
	/*storing name to the allocated space*/
	for (k = 0; k < i ; k++)
		dog_1->name[k] = name[k];
	dog_1->name[k] = name[k];
	dog_1->age = age;
	dog_1->owner = malloc(j * sizeof(dog_1->owner));
	if (dog_1->owner == NULL)
	{
		free(dog_1->name);
        	free(dog_1);
		return (NULL);
	}
	for (k = 0; k < j ; k++)
		dog_1->owner[k] = owner[k];
	dog_1->owner[k] = owner[k];
	return (dog_1);
}
