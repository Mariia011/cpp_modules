#include "easyfind.hpp"

#include <vector>
#include <stack>
#include <list>
#include <set>


template <typename T> void test (T& cntr, int n)
{
	try
	{
		typename T::iterator it = easy_find(cntr, n);
		if(it == cntr.end())
		{
			throw std::bad_exception();
		}
	}

	catch(const std::bad_exception &e)
	{
		std::cout << "exception has been caught\n" << e.what() << "\n";				
	}
	std::cout << "EVERYTHING IS OKAY\n";
}


int main() {
	std::vector <int> meow;
	std::list<int> mur;
	std::set<int> set_set{4, 3, 5, 3425, 33, 11, 666};

	meow.push_back(8);
	meow.push_back(4);
	meow.push_back(11);

	mur.push_back(8);
	mur.push_back(45);

	test(mur, 8);
	test(meow, 101);
	test(set_set, 666);

	return 0;
}