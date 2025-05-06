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
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
	public:
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
	};
	
	std::ostream& operator<<(std::ostream&, const Fixed&);
	// 6 comparison operators: >, <, >=, <=, ==, and !=.
	bool operator==();
	bool operator>();


	// The 4 arithmetic operators: +, -, *, and /

	//increment & decrement operator
	const Fixed& operator++();
	const Fixed& operator++(int);
	
	#endif // FIXED_HPP