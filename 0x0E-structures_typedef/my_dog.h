#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains dog information
 * @name: name of the dog
 * @age: the dog's age
 * @owner: name of the dog's owner
 * 
 * Description - Dog structure that contains information about the dog.
 */
typedef struct dog
{
	char *name
	float age
	char *owner
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);
#endif
