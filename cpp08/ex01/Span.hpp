#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

class Span {
public:
	Span(unsigned int);
	Span operator=(const Span &);
	Span(const Span &other);
	~Span();
private:
	Span();
	unsigned int N;
	std::vector<int> vec;
public:
	void addNumber(int);
	int shortestSpan(void) const;
	int longestSpan(void) const;
	unsigned int get_N();
};

#endif