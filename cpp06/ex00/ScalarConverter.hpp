#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
// #include <fstream>
#include <cstdlib>

using namespace std;

class ScalarConverter {
public:
    static void convert(const string& literal);

private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter&);
    ScalarConverter& operator=(const ScalarConverter&);
    ~ScalarConverter();

    static void printFloat(const string &str);
    static void printDouble(const string &str);
    static void printChar(const string &str);
    static void printInt(const string &str);
    static bool checkNum(const string &str);

    static bool checkInf(const string &val);
    static void printInf(const string &val);
    static void printNan(void);
    static void printError(void);

};

#endif