#include "easyfind.hpp"

template <typename T> void test (T& cntr, int n)
{
	try
	{
		typename T::iterator it = easy_find(cntr, n);
		if(it == cntr.end())
		{
			throw std::bad_exception();
		}
		std::cout << "the value " << *it << " is found\n";
	}

	catch(const std::bad_exception &e)
	{
		std::cout << e.what() << "\n";				
	}
}


int main() {
	std::vector <int> meow;
	std::list<int> mur;
	int arr[] = {4, 3, 5, 3425, 33, 11, 666};
	std::set<int> set_set(arr, arr + sizeof(arr) / sizeof(arr[0]));

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