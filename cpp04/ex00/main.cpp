#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


void testik(Animal* meta)
{
 	std::cout << meta->getType() << std::endl;
}

int main()
{
	const Animal* meta = new Animal();
	const Animal* bobik = new Dog();
	// const Animal* barsik = new Cat();
	// std::cout << bobik->getType() << " " << std::endl;
	// std::cout << barsik->getType() << " " << std::endl;
	// barsik->makeSound();
	// bobik->makeSound();
	// meta->makeSound();
	// testik(meta);
	delete (meta);
	// delete (bobik);
	// delete (barsik);
	return 0;
}