#ifndef FILE_DOG
#define FILE_DOG

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - define dog structure
 * @name: element
 * @age: element
 * @owner: element
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * main - calls struct
 * Return: 0
*/
int main(void)
{
	struct dog dog;

	return (0);
}

#endif
