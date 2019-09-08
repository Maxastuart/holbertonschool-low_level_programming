#ifndef dogh
#define dogh

/**
 * struct dog - Dog identification details
 * @name: pointer to character string
 * @age: floating point integer
 * @owner: pointer to character string
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif /* dogh */
