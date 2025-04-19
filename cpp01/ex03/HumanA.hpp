#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "header.h"

class HumanA{
    public:
        HumanA();
        HumanA(const Weapon& weapon);
        ~HumanA();
    private: 
        std::string name; 
        Weapon      weapon;
    public:
        void attack();
};



#endif //human a