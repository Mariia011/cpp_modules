#include <iostream>
#include <string>
#include <vector>


class Span 
{
private : 
    unsigned int N;
    std::vector<int> container;
    Span();
public : 
    Span(const unsigned int userdef_N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
public : 
    void addNumber();
    unsigned int shortestSpan();
    unsigned int longestSpan();
}