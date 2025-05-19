#include "Cat.hpp"

Cat::Cat() : type("Cat")
{
	std::cout << "Default constructor for CAT class is called\n";	
	the_brain = new Brain;
}

Cat::Cat(const Cat& other) 
{
	std::cout << "Copy constructor of CAT class is called\n";	
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Operator assignment CAT class is called\n";	
	if(this != &other) 
		type = other.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Default destructor for CAT class is called\n";
	delete the_brain;
}

std::string Cat::getType() const
{
	return type;
}

void Cat::makeSound() const 
{
	std::cout << "Meow Meow prrrr..HISSSS\n"; 
}

