
#include "Zombie.hpp"

std::string Zombie::name_getter()
{
    return(this->name);
}

void Zombie::announce ()
{
    std::cout << this->name_getter() << ":  BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " has been destroyed!\n" << std::endl;
}
