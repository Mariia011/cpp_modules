#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    public:
        HumanA();
        ~HumanA();
        HumanA(std::string userName, Weapon& userWeapon) : name(userName), weapon(&userWeapon){}
    private: 
        std::string      name; 
        const Weapon    *weapon;
    public:
        void                set_name(std::string);
        void                attack();
};

#endif //human a