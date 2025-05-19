#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const WrongAnimal* wrg_animal = new WrongCat();
	const Animal* bobik = new Dog();
	const Animal* barsik = new Cat();
	
	std::cout << meta->getType() << std::endl;
	std::cout << wrg_animal->getType() << std::endl;
	std::cout << bobik->getType() << " " << std::endl;
	std::cout << barsik->getType() << " " << std::endl;
	
	wrg_animal->makeSound();
	meta->makeSound();
	barsik->makeSound();
	bobik->makeSound();
	delete (meta);
	delete (bobik);
	delete (barsik);
	return 0;
}