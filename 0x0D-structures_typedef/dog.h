#ifndef GokuBabyDogge
#define GokuBabyDogge

/**
 * struct dog - Here our function will define new type struct dog with elements
 * @name: is the name of the dogge
 * @owner: is the name of the owner
 * @age: is the age of the pupper
 *
 * Return: 0
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
