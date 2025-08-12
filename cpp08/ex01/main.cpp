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
	Span vect_span(10);
	Span too_few_elem(2);

	try
	{
		Span fail_to_add(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	fill_the_span(vect_span);
	fill_the_span(too_few_elem);

	try 
	{
		std::cout << too_few_elem.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	// try 
	// {
	// 	 too_few_elem.addNumber(133);
	// 	// too_few_elem.addNumber(643);
	// }
	//  catch(std::exception &e)
	//  {
	//  	std::cout << e.what() << std::endl;
	//  }

	std::cout << vect_span.shortestSpan() << std::endl; //найти минимальную разность между двумя элентами 
	std::cout << vect_span.longestSpan() << std::endl; //найти разность между мин. и макс.
	vect_span.addNumber(2);
	return 0;
}
