#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl{
    public:
        void complain(std::string);
    private:
        void debug();
        void info();
        void warning();
        void error();
};


#endif