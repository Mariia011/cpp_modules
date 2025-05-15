#include "Cat.hpp"

Cat::Cat() : type("cat")
{
	std::cout << "Default constructor for Cat class is called\n";	
}

Cat::Cat(const Cat& other)
{
	std::cout << "Copy constructor of Cat class is called\n";	
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Operator assignment Cat class is called\n";	
	if(this != &other) 
		type = other.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Default destructor for Cat class is called\n";
}

//public member functions

std::string Cat::getType()
{
	return type;
}

void Cat::makeSound()
{
	std::cout << "Meow Meow prrrr..HISSSS\n"; 
}

