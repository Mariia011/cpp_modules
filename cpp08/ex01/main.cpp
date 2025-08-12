#include "Span.hpp"

void fill_the_span(Span &any_span)
{
	try 
	{
		for (unsigned int i = 0; i < any_span.get_N(); i++)
		{
			any_span.addNumber(rand()%47+89);
		}
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	Span ten_thous_case(10); //add in rhe end
	Span too_few_elem(1);
	Span man_add(3);

	man_add.addNumber(4);
	man_add.addNumber(1);
	man_add.addNumber(0);
	
	// check if the function works fine
	std::cout << std::endl << man_add.longestSpan() << std::endl;
	
	// std::cout << std::endl << man_add.longestSpan() << std::endl;
	std::cout << man_add.shortestSpan() << std::endl;
	

	//N number to be out of range
	try
	{
		Span fail_to_add(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	//Max elements has been reached
	try
	{
		man_add.addNumber(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	fill_the_span(too_few_elem);
	fill_the_span(ten_thous_case);

	//not enough elements between in the span
	try 
	{
		std::cout << too_few_elem.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
