#include "AAnimal.hpp"

AAnimal::AAnimal() : type("")
{
	std::cout << "AAnimal default constructor called!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type)
{
	std::cout << "AAnimal copy constructor called!" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Default destructor for AAnimal is called!" << std::endl;
}

void AAnimal::setType(const std::string &type)
{
	this->type = type;
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}