#include "Fixed.hpp"

Fixed::Fixed(){
	this->num_val = 0;
	std::cout << "Default constructor called" << "\n";
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << "\n";
	if(this == &other)
		return *this;
	this->num_val = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->num_val;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->num_val = raw;
}
