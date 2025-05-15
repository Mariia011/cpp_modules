#include "Animal.hpp"

Animal::Animal() : type("Default")
{
	std::cout << "Default constructor for base class Animal is called\n";	
}

Animal::Animal(const Animal& other)
{
	std::cout << "Copy constructor of base class Animal is called\n";	
	*this = other; //why with no ptr/reference?
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Operator assignment of base class Animal is called\n";	
	if(this != &other) //why with reference?
		type = other.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Default destructor for base class Animal is called\n";
}

//public member functions

std::string Animal::getType()
{
	return type;
}

void Animal::makeSound()
{
	std::cout << "Some unrecognizable animal's sound\n"; 
}

