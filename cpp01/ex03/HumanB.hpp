#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "header.h"

class HumanB{
    public:
        HumanB();
        ~HumanB();
    private: 
        std::string name; 
        Weapon weapon;
    public:
        void attack();
};


#endif //human b