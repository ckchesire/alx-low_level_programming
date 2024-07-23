#ifndef DOG_H
#define DOG_
/**
 * struct dog - template for 'dog'
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

