#ifndef DATA_HPP
#define DATA_HPP

#include <string>
using namespace std;

class Data
{
public:
    Data();
    Data(int id);
    Data operator=(const Data&);
    Data(const Data&);
    ~Data();
public:
    int id;
};

#endif