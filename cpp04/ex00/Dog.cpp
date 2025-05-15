#include "Dog.hpp"

Dog::Dog() : type("dog")
{
	std::cout << "Default constructor for Dog class is called\n";	
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
}

//public member functions

std::string Dog::getType()
{
	return type;
}

void Dog::makeSound()
{
	std::cout << "HAV HAV indz mi at boom u ararat\n"; 
}

