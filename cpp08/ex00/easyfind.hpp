#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>

template <typename T>
typename T::iterator easyfind(T &container, const int find)
{
	return std::find(container.begin(), container.end(), find);
}

#endif