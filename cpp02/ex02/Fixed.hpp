#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
	private:
		int num_val;
		static const int fract_bits = 8;
	public: 
		Fixed();
		Fixed(int);
		// Fixed(const int);
		Fixed(float);
		// Fixed(const float);
		~Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
	public:
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
	public:
		bool operator==(const Fixed&) const;
		bool operator>(const Fixed&) const;
		bool operator<(const Fixed&) const;
		bool operator>=(const Fixed&) const;
		bool operator<=(const Fixed&) const;
		bool operator!=(const Fixed&) const;

		Fixed&	operator++();
		Fixed	operator++(int);
	
		Fixed& operator--();
		Fixed operator--(int);

		int operator+(const Fixed &other);
		int operator-(const Fixed &other);
		int operator/(const Fixed &other);
		int operator*(const Fixed &other);
	public:
		static const 	Fixed& max(const Fixed& obj1, const Fixed& obj2);
		static		 	Fixed& max(Fixed& obj1, Fixed& obj2);
		static const 	Fixed& min(const Fixed& obj1, const Fixed& obj2);
		static 			Fixed& min(Fixed& obj1, Fixed& obj2);
	};
	
	std::ostream& operator<<(std::ostream&, const Fixed&);
	
	#endif // FIXED_HPP