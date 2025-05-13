
#include "Zombie.hpp"

std::string Zombie::name_getter()
{
    return(this->name);
}

void Zombie::announce ()
{
    std::cout << this->name_getter() << ": Mmmmmmmmm...ashuki\n";
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie::Zombie(){
}


Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " has been destroyed!" << std::endl;
}