#ifndef ARRAY_TPP
#define ARRAY_TPP

using namespace std;
#include <stdexcept>

template <typename T>
Array<T>::Array() : data(NULL), size(0){}

template <typename T>
Array<T>::Array(unsigned int userdef_size) : data(new T[userdef_size]()), size(userdef_size) {}
 
template <typename T>
Array<T>::Array(Array &other) : data(new T[other.size]), size(other.size)
{
    for (unsigned int i = 0; i < other.size; i++)
    {
        data[i] = other.data[i];
    }
}

template <typename T>
Array Array<T>::operator=(Array & other)
{
    if(this == &other)
        return *this;
    delete[] data;
    size = other.size;
    data = new T[size];
    for (unsigned int i = 0; i < size; ++i)
        data[i] = other.data[i];
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] data;
}

//member functions

template<typename T>
unsigned int Array<T>::size()
{
    return this->size;
}

template <typename T>
Array Array<T>::operator[](unsigned int index)
{
    if(index >= this->size)
        throw out_of_range("Index is too big");
    return data[index];
}

#endif 