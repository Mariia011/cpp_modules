#include "Fixed.hpp"

Fixed::Fixed(){
	this->num_val = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called\n";
	if(this != &other)
		num_val = other.num_val;
	return *this;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    num_val = value << this->fract_bits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    num_val = roundf(value * (1 << this->fract_bits));
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
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

Fixed Fixed::operator+(const Fixed &other) 
{
	Fixed res;
	res.setRawBits(this->num_val + other.num_val);
	return res;
}

Fixed Fixed::operator-(const Fixed &other) 
{
	Fixed res;
	res.setRawBits(this->num_val - other.num_val);
	return res;
}

Fixed Fixed::operator/(const Fixed &other) 
{
	Fixed res;
	res.setRawBits((this->num_val << this->fract_bits) / other.num_val);
	return res;
}

Fixed Fixed::operator*(const Fixed &other) 
{
	Fixed res;
	res.setRawBits((this->num_val * other.num_val) >> this->fract_bits);
	return res;
}
// member operator increment and decrement overloading 

Fixed&	Fixed::operator++()
{
	++(this->num_val);
	return *this;
}

Fixed	Fixed::operator++(int)
{	
	Fixed copy(*this); //copy constructor
	this->num_val++;
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