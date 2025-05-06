#include "Fixed.hpp"

Fixed::Fixed(){
	// this->num_val = 0;
	std::cout << "Default constructor called" << "\n";
}

// Fixed::Fixed(const int num)
// {
// 	this->num_val = num;
// 	std::cout << "Parametric constructor called" << "\n";
// }

Fixed::Fixed(int num)
{
	this->num_val = num;
	std::cout << "Parametric constructor called" << "\n";
}

// Fixed::Fixed(const float num)
// {
// 	this->num_val = num;
// 	std::cout << "Parametric constructor called" << "\n";
// }

Fixed::Fixed(float num)
{
	this->num_val = num;
	std::cout << "Parametric constructor called" << "\n";
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

// overloading of operators
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

// member comparison operators overloading 

bool Fixed::operator==(const Fixed& other) const
{
	return (other.num_val == this->num_val);
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->num_val > other.num_val);
}

bool Fixed::operator<(const Fixed& other) const
{
	return !(operator>(other) && operator==(other));
}

bool Fixed::operator!=(const Fixed& other) const
{
	return !(operator==(other));
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (operator==(other) || operator>(other));
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (operator==(other) || operator<(other));
}

// member arithmetic functions overloading 

int Fixed::operator+(const Fixed &other)
{
	return this->num_val + other.num_val;
}

int Fixed::operator-(const Fixed &other)
{
	return this->num_val - other.num_val;
}

int Fixed::operator/(const Fixed &other)
{
	return this->num_val / other.num_val;
}

int Fixed::operator*(const Fixed &other)
{
	return this->num_val * other.num_val;
}
// member operator increment and decrement overloading 

Fixed&	Fixed::operator++()
{
	++(this->num_val);
	return *this;
}

Fixed	Fixed::operator++(int)
{	
	Fixed copy;
	copy = this->num_val;
	++(this->num_val);
	return copy;
}

Fixed& Fixed::operator--()
{
	--(this->num_val);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed copy;
	copy.num_val = this->num_val;
	--(num_val);
	return copy;
}

//max and min overload

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2)
{
	return (obj1.num_val > obj2.num_val) ? obj2 : obj1;
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	return (obj1.num_val > obj2.num_val) ? obj2 : obj1;
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
	return (obj1.num_val > obj2.num_val) ? obj1 : obj2;
}

const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	return (obj1.num_val > obj2.num_val) ? obj1 : obj2;
}

// member functions of Fixed 

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
