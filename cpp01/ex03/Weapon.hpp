#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
    public:
        Weapon();
        Weapon(std::string userType) : type(userType){}
        ~Weapon();
    private:
        std::string type;
    public:
        const std::string& getType() const;
        void               setType(std::string);
};

#endif