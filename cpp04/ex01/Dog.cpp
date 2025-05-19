#include "Dog.hpp"

Dog::Dog() : type("Dog")
{
	std::cout << "Default constructor for Dog class is called\n";	
	the_brain = new Brain;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Copy constructor of Dog class is called\n";	
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Operator assignment Dog class is called\n";	
	if(this != &other) 
		type = other.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Default destructor for Dog class is called\n";
	delete the_brain;
}

std::string Dog::getType() const
{
	return type;
}

void Dog::makeSound() const 
{
	std::cout << "HAV HAV indz mi at boom u ararat\n"; 
}

