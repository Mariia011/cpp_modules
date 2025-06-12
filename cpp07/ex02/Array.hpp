#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
    class Array
{
private:
    T* data;
    unsigned int size;
public:
    Array();
    Array(unsigned int size);
    Array(Array &);
    Array operator=(Array &);
    Array operator[](unsigned int);
    ~Array();
public:
    unsigned int size();

};

#include "Array.tpp"

#endif