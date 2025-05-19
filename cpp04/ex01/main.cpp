#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal **animal_arr = new Animal *[100];
	
	for (int i = 0; i < 50; i++)
		animal_arr[i] = new Cat();

	for (int i = 50; i < 100; i++)
		animal_arr[i] = new Dog();

	for (int i = 0; i < 100; i++)
	{
		animal_arr[i]->makeSound();
		delete animal_arr[i];
	}
	delete[] animal_arr;
	animal_arr = NULL;
	if(animal_arr != NULL)
	{
		std::cout << "PLOXO";
		return 1;
	}
	return (0);
}