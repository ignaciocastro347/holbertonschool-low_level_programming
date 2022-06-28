#ifndef DOG_STRUCTURE
#define DOG_STRUCTURE
/**
 * struct dog - a dog structure
 * @name: name as string
 * @age: age as float
 * @owner: owner as string
 *
 * Description: A dog structure bro
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
#endif
