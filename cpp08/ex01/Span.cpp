#include "Span.hpp"

Span::Span(unsigned int userdef_N) : N(userdef_N) {
	if(N == 0 || N >= std::numeric_limits<unsigned int>::max())
		throw std::out_of_range("The N number is out of range");
}

Span::Span(const Span &other) 
{
	*this = other;
}

Span Span::operator=(const Span &other) {
	if(this != &other)
	{
		this->vec = other.vec;
		this->N = other.N;
	}
	return *this;
}

Span::~Span(){}

void Span::addNumber(int num)
{
	if(this->vec.size() == this->N)
	{
		throw std::overflow_error("Max elements has been reached");
	}
	this->vec.push_back(num);
	std::cout << num << ", ";
}

int Span::shortestSpan() const
{
	if (this->vec.size() < 2)
		throw std::out_of_range("Not enough elements to find a span");
	
	std::vector<int> sorted = this->vec;
	std::sort(sorted.begin(), sorted.end());
	
	int shortest_span = std::numeric_limits<int>::max();

	for (size_t i = 1; i < sorted.size(); ++i)
	{
		int span = sorted[i] - sorted[i - 1];
		if (span < shortest_span)
			shortest_span = span;
	}
	return shortest_span;
}

int Span::longestSpan() const
{
	if(this->vec.size() < 2)
		throw std::logic_error("Not enough elements to find a span");
	return *std::max_element(this->vec.begin(), this->vec.end()) - *std::min_element(this->vec.begin(), this->vec.end());
} 

unsigned int Span::get_N()
{
	return this->N;
}