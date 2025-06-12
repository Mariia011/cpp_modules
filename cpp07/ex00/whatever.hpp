#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
using namespace std;

template<typename T>
void swap(T &param1, T &param2)
{
    // cout << "INITIALLY PARAM1 AND PARAM 2 ARE: " << param1 << " AND " << param2 << endl;
    T tmp = param1;
    param1 = param2;
    param2 = tmp;
    // cout << "AND BOOM, NOW THEY ARE: " << param1 << " AND " << param2 << endl;

}

template<typename T>
T min(T param1, T param2)
{
    return (param1 > param2 ? param2 : param1);
}


template<typename T>
T max(T param1, T param2)
{
    return (param1 > param2 ? param1 : param2);
}

#endif