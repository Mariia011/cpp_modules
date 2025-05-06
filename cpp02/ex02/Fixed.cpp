#include "Fixed.hpp"

Fixed::Fixed(){
	// this->num_val = 0;
	std::cout << "Default constructor called" << "\n";
}

Fixed::Fixed(const int num)
{
	this->num_val = num;
	std::cout << "Parametric constructor called" << "\n";
}

Fixed::Fixed(const float num)
{
	this->num_val = num;
	std::cout << "Parametric constructor called" << "\n";
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

std::ostream& operator<<(std::ostream& stream, const Fixed& obj)
{
	stream << obj.toFloat();
	return stream;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return (this->num_val / float(1 << fract_bits));
}

int Fixed::toInt(void) const
{
	return (this->num_val >> fract_bits);
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
