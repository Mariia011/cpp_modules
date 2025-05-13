
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *theZombie = new Zombie(name);
    theZombie->announce();
    return theZombie;
}