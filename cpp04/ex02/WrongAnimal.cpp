#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default")
{
	std::cout << "Default wrongAnimal constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Copy wrongAnimal constructor\n";
	this->type = other.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default destructor for wrongAnimal\n";
}


void WrongAnimal::setType(const std::string &type)
{
	this->type = type;
}

std::string WrongAnimal::getType() const 
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}