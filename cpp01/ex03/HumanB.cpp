#include "HumanB.hpp"

HumanB::HumanB() : name(), weapon(NULL) {}

HumanB::HumanB(const std::string& name) : name(name), weapon() {}

HumanB::HumanB(const HumanB& copy_val) : name(copy_val.name), weapon(copy_val.weapon) {}

void HumanB::setWeapon(Weapon& userWeapon)
{
    this->weapon = &userWeapon;
}

void HumanB::attack()
{
    if (this->weapon) {
        std::cout << "Human A " << name << " attacks with their " << this->weapon->getType() << std::endl;
    } else {
        std::cout << name << " has no weapon to attack with!" << std::endl;
    }
}