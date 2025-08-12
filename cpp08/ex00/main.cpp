#include "easyfind.hpp"

template <typename T>
void testFind(T &container, int value)
{
	typename T::iterator it = easyfind(container, value);
	if (it != container.end())
		std::cout << "Found: " << *it << " in container" << std::endl;
	else
		std::cout << "Value " << value << " not found in container" << std::endl;
}

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	std::vector<int>::iterator start(arr1);
	std::vector<int>::iterator end(arr1 + 5);
	std::vector<int> vec(start, end);

	int arr2[] = {10, 20, 30, 40, 50};
	std::list<int> lst(arr2, arr2 + 5);

	int arr3[] = {100, 200, 300, 400, 500};
	std::deque<int> deq(arr3, arr3 + 5);

	testFind(vec, 3);
	testFind(vec, 6); 
	testFind(lst, 20); 
	testFind(lst, 200); 
	testFind(deq, 300); 
	testFind(deq, 30909); 

	return 0;
}
