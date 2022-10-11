#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - structure dog
 * @name: holds name of dog
 * @age: holds the age of dog
 * @owner: holds owner of dog
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
