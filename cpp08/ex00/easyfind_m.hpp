#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include "easyfind.tpp"
#include <exception>
#include <iostream>

template <typename T>typename T::iterator easy_find(T& cntr, int n)
{
	return std::find(cntr.begin(), cntr.end(), n);
}

#endif 