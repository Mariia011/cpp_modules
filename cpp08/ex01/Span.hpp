#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iterator>

#include <exception>
#include <vector>
#include <algorithm>
#include <limits>

class Span{
public: 
	Span(unsigned int userdef_N);
	Span(const Span &other);
	Span operator=(const Span &other);
	~Span();
private:
	Span();
private: 
	unsigned int N;
	std::vector <int> vec;
public:
	void addNumber(int num);
    int shortestSpan() const;
    int longestSpan() const;
	unsigned int get_N();

};

#endif