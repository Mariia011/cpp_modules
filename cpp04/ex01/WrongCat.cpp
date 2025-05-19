#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default wrongCat constructor\n";
	this->type = "unknown";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "Copy wrongCat for constructor\n";
	this->type = other.type;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor for WrongCat\n";
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat's Sound\n";
}

std::string WrongCat::getType() const 
{
	return type;
}