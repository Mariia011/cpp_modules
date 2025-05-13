
#include "HumanA.hpp"

HumanA::HumanA(){}

void HumanA::set_name(std::string userName)
{
    this->name = userName;
}

void HumanA::attack()
{
    std::cout << "Human A "<< this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanA::~HumanA(){}