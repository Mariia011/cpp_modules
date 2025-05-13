
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    public:
        HumanB();
        HumanB(const std::string& name);
        HumanB(const HumanB& copy_val);
    private: 
        std::string name; 
        Weapon*     weapon;
    public:
        void                setWeapon(Weapon&);
        void                attack();
};

#endif //human b